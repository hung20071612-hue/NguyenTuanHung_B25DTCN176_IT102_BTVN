#include <stdio.h>
#include <string.h>

struct Book {
    char id[20];
    char title[100];
    char author[50];
    float price;
    char category[50];
};

void inputBook(struct Book *b) {
    printf("Nhap ma sach: ");
    fgets(b->id, sizeof(b->id), stdin);
    b->id[strcspn(b->id, "\n")] = '\0';
    printf("Nhap ten sach: ");
    fgets(b->title, sizeof(b->title), stdin);
    b->title[strcspn(b->title, "\n")] = '\0';
    printf("Nhap tac gia: ");
    fgets(b->author, sizeof(b->author), stdin);
    b->author[strcspn(b->author, "\n")] = '\0';
    printf("Nhap gia tien: ");
    scanf("%f", &b->price);
    while (getchar() != '\n');
    printf("Nhap the loai: ");
    fgets(b->category, sizeof(b->category), stdin);
    b->category[strcspn(b->category, "\n")] = '\0';
}

void displayAll(struct Book books[], int n) {
    if (n == 0) {
        printf("Chua co sach nao.\n");
        return;
    }
    for (int i = 0; i < n; i++) {
        printf("%d. Ma: %s | Ten: %s | Tac gia: %s | Gia: %.2f | The loai: %s\n",
               i + 1, books[i].id, books[i].title,
               books[i].author, books[i].price, books[i].category);
    }
}

void insertBook(struct Book books[], int *n, int pos) {
    if (pos < 0 || pos > *n) {
        printf("Vi tri khong hop le.\n");
        return;
    }
    for (int i = *n; i > pos; i--) {
        books[i] = books[i - 1];
    }
    inputBook(&books[pos]);
    (*n)++;
}

void deleteBook(struct Book books[], int *n, const char *id) {
    for (int i = 0; i < *n; i++) {
        if (strcmp(books[i].id, id) == 0) {
            for (int j = i; j < *n - 1; j++) {
                books[j] = books[j + 1];
            }
            (*n)--;
            printf("Da xoa sach.\n");
            return;
        }
    }
    printf("Khong tim thay ma sach.\n");
}

void updateBook(struct Book books[], int n, const char *id) {
    for (int i = 0; i < n; i++) {
        if (strcmp(books[i].id, id) == 0) {
            printf("Nhap thong tin moi:\n");
            inputBook(&books[i]);
            return;
        }
    }
    printf("Khong tim thay sach.\n");
}

void sortBooks(struct Book books[], int n, int asc) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((asc && books[i].price > books[j].price) ||
                (!asc && books[i].price < books[j].price)) {
                struct Book temp = books[i];
                books[i] = books[j];
                books[j] = temp;
            }
        }
    }
    printf("Da sap xep xong.\n");
}

void searchByTitle(struct Book books[], int n, const char *title) {
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (strstr(books[i].title, title)) {
            printf("Ma: %s | Ten: %s | Tac gia: %s | Gia: %.2f | The loai: %s\n",
                   books[i].id, books[i].title, books[i].author,
                   books[i].price, books[i].category);
            found = 1;
        }
    }
    if (!found) {
        printf("Khong tim thay sach.\n");
    }
}

int main() {
    struct Book books[100];
    int n = 0;
    int choice,pos,asc;
    char title[100],id[20];

    while (1) {
        printf("+-------------------MENU--------------------+\n");
        printf("|1. Nhap so luong va thong tin sach         |\n");
        printf("|2. Hien thi thong tin sach                 | \n");
        printf("|3. Them sach vao vi tri                    |\n");
        printf("|4. Xoa sach theo ma sach                   |\n");
        printf("|5. Cap nhat thong tin sach theo ma sach    |\n");
        printf("|6. Sap xep sach theo gia (1: tang, 0: giam)|\n");
        printf("|7. Tim kiem sach theo ten                  |\n");
        printf("|8. Thoat                                   |\n");
        printf("+-------------------------------------------+\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1: 
                printf("Nhap so luong sach: ");
                scanf("%d", &n);
                getchar();
                for (int i = 0; i < n; i++) {
                    printf("Nhap sach thu %d:\n", i + 1);
                    inputBook(&books[i]);
                }
                break;
            case 2:
                displayAll(books, n);
                break;
            case 3:
                printf("Nhap vi tri chen (0-%d): ", n);
                scanf("%d", &pos);
                getchar();
                insertBook(books, &n, pos);
                break;
            case 4: 
                printf("Nhap ma sach can xoa: ");
                fgets(id, sizeof(id), stdin);
                id[strcspn(id, "\n")] = '\0';
                deleteBook(books, &n, id);
                break;
            case 5:
                printf("Nhap ma sach can cap nhat: ");
                fgets(id, sizeof(id), stdin);
                id[strcspn(id, "\n")] = '\0';
                updateBook(books, n, id);
                break;
            case 6:
                printf("Nhap 1 (tang) hoac 0 (giam): ");
                scanf("%d", &asc);
                getchar();
                sortBooks(books, n, asc);
                break;
            case 7:
                printf("Nhap ten sach can tim: ");
                fgets(title, sizeof(title), stdin);
                title[strcspn(title, "\n")] = '\0';
                searchByTitle(books, n, title);
                break;
            case 8:
                printf("Thoat chuong trinh.\n");
                return 0;
            default:
                printf("Lua chon khong hop le.\n");
        }
    }
}
