#include<stdio.h>
#include<string.h>
struct Book {
	char title[100];
	char author[50];
	float price;
};
int main(){
	struct Book list_book[3];
	for(int i = 0; i < 3; i++){
		printf("moi ban nhap ten quyen sach %d: ",i+1);
		fgets(list_book[i].title, sizeof(list_book[i].title),stdin);
		list_book[i].title[strcspn(list_book[i].title,"\n")] = 0;
		printf("moi ban nhap tac cua cuon sach %d: ",i+1);
		fgets(list_book[i].author, sizeof(list_book[i].author),stdin);
		list_book[i].author[strcspn(list_book[i].author,"\n")] = 0;
		printf("moi ban nhap gia cua cuon sach %d: ",i+1);
		scanf("%f",&list_book[i].price);
		getchar();
	}
	for(int i = 0; i < 3; i++){
		printf("ten cuon sach %d la: %s\n",i+1,list_book[i].title);
		printf("tac gia cua cuon sach %d la: %s\n",i+1,list_book[i].author);
		printf("gia cua cuon sach %d la: %.2f\n",i+1,list_book[i].price);
	}
	return 0;
}

