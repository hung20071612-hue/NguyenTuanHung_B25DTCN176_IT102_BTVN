#include<stdio.h>
#include<string.h>

struct Product {
	char name[50];
	float price;
	int quantity;
};
struct Product list_product[5];
void display(){
	float sum_product = 0;
	for(int i = 0; i < 5; i++){
		sum_product += (list_product[i].price * list_product[i].quantity);
	}
	printf("tong gia tri san pham la: %.2f",sum_product);
}
int main(){
	for(int i = 0; i < 5; i++){
		printf("moi ban nhap ten san pham %d: ",i+1);
		fgets(list_product[i].name, sizeof(list_product[i].name),stdin);
		list_product[i].name[strcspn(list_product[i].name,"\n")] = 0;
		printf("moi ban nhap gia cua san pham %d: ",i+1);
		scanf("%f",&list_product[i].price);
		getchar();
		printf("moi ban nhap so luong cua san pham %d: ",i+1);
		scanf("%d",&list_product[i].quantity);
		getchar();
	}
	for(int i = 0; i < 5; i++){
		printf("ten cua san pham %d la: %s\n",i+1,list_product[i].name);
		printf("gia cua san pham %d la: %.2f\n",i+1,list_product[i].price);
		printf("so luong cua san pham %d la: %d\n",i+1,list_product[i].quantity);
	}
	display();
	return 0;
}

