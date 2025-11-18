#include<stdio.h>
#include<string.h>
struct Student {
	char name[100];
	int age;
	char phoneNumber[100];
};
int main(){
	struct Student list[5];
	for(int i = 0; i < 5; i++){
	printf("moi ban nhap ten sv thu %d: ",i+1);
	fgets(list[i].name, sizeof(list[i].name), stdin);
	list[i].name[strcspn(list[i].name,"\n")] = 0;
	printf("moi ban nhap tuoi sv thu %d: ",i+1);
	scanf("%d",&list[i].age);
	getchar();
	printf("moi ban nhap sdtsv thu %d: ",i+1);
	fgets(list[i].phoneNumber, sizeof(list[i].phoneNumber), stdin);
	list[i].phoneNumber[strcspn(list[i].phoneNumber,"\n")] = 0;
	}
	printf("thong tin cac sinh vien la: \n");
	for(int i = 0; i < 5; i++){
		printf("ten cua sv thu %d la: %s\n",i+1,list[i].name);
		printf("tuoi cua sv thu %d la: %d\n",i+1,list[i].age);
		printf("sdt cua sv thu %d la: %s\n",i+1,list[i].phoneNumber);
	}
	return 0;
}

