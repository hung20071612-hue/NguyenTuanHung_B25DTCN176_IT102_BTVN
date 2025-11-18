#include<stdio.h>

struct Infor{
	char name[100];
	int age;
	char phoneNumber[100];
};
int main(){
	struct Infor person01 = {
		"Nguyen Tuan Hung",
		18,
		"0396906644",
	};
	printf("ten cua ban la: %s\n",person01.name);
	printf("tuoi cua ban la: %d\n",person01.age);
	printf("sdt cua ban la: %s",person01.phoneNumber);
	return 0;
}

