#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
    float grade;
};

void inputStudent(struct Student *s) {
    printf("Nhap ten: ");
    fgets(s->name, sizeof(s->name), stdin);
    s->name[strcspn(s->name, "\n")] = '\0';
    printf("Nhap tuoi: ");
    scanf("%d", &s->age);
    printf("Nhap diem trung binh: ");
    scanf("%f", &s->grade);
	getchar();
}

void searchStudent(struct Student students[], int size, const char *target) {
    for (int i = 0; i < size; i++) {
        if (strcmp(students[i].name, target) == 0) {
            printf("Tim thay hoc sinh:\n");
            printf("Ten: %s\n", students[i].name);
            printf("Tuoi: %d\n", students[i].age);
            printf("Diem trung binh: %.2f\n", students[i].grade);
            return;
        }
    }
    printf("Khong tim thay hoc sinh co ten \"%s\".\n", target);
}

int main() {
    struct Student students[5];

    for (int i = 0; i < 5; i++) {
        printf("\nNhap thong tin hoc sinh thu %d:\n", i + 1);
        inputStudent(&students[i]);
    }
    char nameToSearch[50];
    printf("\nNhap ten hoc sinh can tim: ");
    fgets(nameToSearch, sizeof(nameToSearch), stdin);
    nameToSearch[strcspn(nameToSearch, "\n")] = '\0';
    searchStudent(students, 5, nameToSearch);

    return 0;
}
