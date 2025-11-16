#include<stdio.h>

void sum(int *a, int *b);
int main(){
	int a = 3, b = 4;
	sum(&a,&b);
	return 0;
}
void sum(int *a, int *b){
	int sum = *a + *b;
	printf("tong cua 2 so a va b la: %d",sum);
}

