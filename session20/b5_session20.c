#include<stdio.h>
#include<string.h>
struct Student {
	int id;
	char name[100];
	int age;
	char phoneNumber[100];
};
int main(){
	int n;
	struct Student list[50] = {
		 {1,"a",18,"a",},
		 {2,"b",18,"b",},
		 {3,"c",18,"c",},
		 {4,"d",18,"d",},
		 {5,"e",18,"e",},
	};
	printf("moi nhap ID cua sv muon tim: ");
	scanf("%d",&n);
	getchar();
for(int i = n; i < 5; i++){
	if(list[i].id > 5){
		printf("khong tim thay sv!!!\n");
		return 0;
	}else{
		printf("moi ban nhap ten muon cap nhat: ");
		fgets(list[i-1].name, sizeof(list[i-1].name), stdin);
		list[i-1].name[strcspn(list[i-1].name,"\n")] = 0;
		printf("moi ban nhap tuoi muon cap nhat: ");
		scanf("%d",&list[i-1].age);
		getchar();
		break;
	}
}
	for(int i = 0; i < 5; i++){
		printf("ID cua sv thu %d la: %d\n",i+1,list[i].id);
		printf("ten cua sv thu %d la: %s\n",i+1,list[i].name);
		printf("tuoi cua sv thu %d la: %d\n",i+1,list[i].age);
		printf("sdt cua sv thu %d la: %s\n",i+1,list[i].phoneNumber);
	}
	return 0;
}

