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
	printf("moi ban nhap ID cua sv muon xoa: ");
	scanf("%d",&n);
	getchar();
	for(int i = n - 1; i < x; i++){
		list[i].id = list[i+1].id;
		strcpy(list[i].name, list[i+1].name);
		list[i].age = list[i+1].age;
		strcpy(list[i].phoneNumber, list[i+1].phoneNumber);
		x--;
	}
	for(int i = 0; i < x; i++){
		printf("ID cua sv thu %d la: %d\n",i+1,i+1);
		printf("ten cua sv thu %d la: %s\n",i+1,list[i].name);
		printf("tuoi cua sv thu %d la: %d\n",i+1,list[i].age);
		printf("sdt cua sv thu %d la: %s\n",i+1,list[i].phoneNumber);
	}
	return 0;
}

