#include<stdio.h>
#include<string.h>
struct Infor{
	char name[100];
	int age;
	char phoneNumber[100];
};
int main(){
	struct Infor person01;
	printf("moi ban nhap ten: ");
	fgets(person01.name, sizeof(person01.name), stdin);
	person01.name[strcspn(person01.name,"\n")] = 0;
	printf("moi ban nhap tuoi: ");
	scanf("%d",&person01.age);
	getchar();
	printf("moi ban nhap sdt: ");
	fgets(person01.phoneNumber, sizeof(person01.phoneNumber), stdin);
	person01.phoneNumber[strcspn(person01.phoneNumber,"\n")] = 0;
	printf("ten cua ban la: %s\n",person01.name);
	printf("tuoi cua ban la: %d\n",person01.age);
	printf("sdt cua ban la: %s",person01.phoneNumber);
	return 0;
}

