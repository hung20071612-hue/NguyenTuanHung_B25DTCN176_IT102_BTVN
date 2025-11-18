#include<stdio.h>
#include<string.h>
struct Student {
	int id;
	char name[100];
	int age;
	char phoneNumber[100];
};
int main(){
	int n, x = 5;
	struct Student list[50] = {
		 {1,"a",18,"a",},
		 {2,"b",18,"b",},
		 {3,"c",18,"c",},
		 {4,"d",18,"d",},
		 {5,"e",18,"e",},
	};
	printf("moi ban nhap vi tri muon them sv: ");
	scanf("%d",&n);
	getchar();
	for(int i = x; i >= n; i--){
		list[i].id = list[i-1].id;
		strcpy(list[i].name, list[i-1].name);
		list[i].age = list[i-1].age;
		strcpy(list[i].phoneNumber, list[i-1].phoneNumber);
	}
	x++;
	printf("moi ban nhap ten sv muon them: ");
	fgets(list[n-1].name, sizeof(list[n-1].name), stdin);
	list[n-1].name[strcspn(list[n-1].name,"\n")] = 0;
	printf("moi ban nhap tuoi sv muon them: ");
	scanf("%d",&list[n-1].age);
	getchar();
	printf("moi ban nhap sdt cua sv muon them: ");
	fgets(list[n-1].phoneNumber, sizeof(list[n-1].phoneNumber), stdin);
	list[n-1].phoneNumber[strcspn(list[n-1].phoneNumber,"\n")] = 0;
	for(int i = 0; i < x; i++){
		printf("ID cua sv thu %d la: %d\n",i+1,i+1);
		printf("ten cua sv thu %d la: %s\n",i+1,list[i].name);
		printf("tuoi cua sv thu %d la: %d\n",i+1,list[i].age);
		printf("sdt cua sv thu %d la: %s\n",i+1,list[i].phoneNumber);
	}
	return 0;
}
