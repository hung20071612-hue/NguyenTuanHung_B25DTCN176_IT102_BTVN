#include<stdio.h>
struct Address {
	char street[100];
	char city[50];
	int zip;
};
struct Person {
	char name[50];
	int age;
	struct Address address;
};
int main(){
	struct Person person01 ={
		"hung",
		18,
		"Linh Dam",
		"Ha Noi",
		7827342
	};
	printf("ten cua hoc sinh la: %s\n",person01.name);
	printf("tuoi cua hoc sinh la: %d\n",person01.age);
	printf("dia chi cua hoc sinh la: \n");
	printf("%s\n",person01.address.city);
	printf("%s\n",person01.address.street);
	printf("%d",person01.address.zip);
	return 0;
}

