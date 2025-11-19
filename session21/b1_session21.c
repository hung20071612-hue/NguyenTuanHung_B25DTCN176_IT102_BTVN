#include<stdio.h>
struct Car{
	char model[100];
	int year;
	int price;
};
int main(){
	struct Car myCar = {
		"mecedes",
		2000,
		2
	};
	printf("ten cua xe: %s\n",myCar.model);
	printf("nam san xuat xe: %d\n",myCar.year);
	printf("gia cua chiec xe: %d ty",myCar.price);
	return 0;
}

