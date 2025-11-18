#include<stdio.h>
#include<string.h>
struct Student {
	int id;
	char name[100];
	int age;
	char phoneNumber[100];
};
int main(){
	struct Student list[50] = {
		 {1,"a",18,"a",},
		 {2,"b",18,"b",},
		 {3,"c",18,"c",},
		 {4,"d",18,"d",},
		 {5,"e",18,"e",},
	};
	printf("moi ban nhap thong tin cua sv moi them: \n");
	printf("moi ban nhap ten sv thu %d: ",list[4].id + 1);
	fgets(list[5].name, sizeof(list[5].name), stdin);
	list[5].name[strcspn(list[5].name,"\n")] = 0;
	printf("moi ban nhap tuoi sv thu %d: ",list[4].id + 1);
	scanf("%d",&list[5].age);
	getchar();
	printf("moi ban nhap sdt sv thu %d: ",list[4].id + 1);
	fgets(list[5].phoneNumber, sizeof(list[5].phoneNumber), stdin);
	list[5].phoneNumber[strcspn(list[5].phoneNumber,"\n")] = 0;
	for(int i = 0; i < 6; i++){
		printf("ID cua sv thu %d la: %d\n",i+1,i+1);
		printf("ten cua sv thu %d la: %s\n",i+1,list[i].name);
		printf("tuoi cua sv thu %d la: %d\n",i+1,list[i].age);
		printf("sdt cua sv thu %d la: %s\n",i+1,list[i].phoneNumber);
	}
	return 0;
}

