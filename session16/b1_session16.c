#include<stdio.h>

int main(){
	char str[1000];
	printf("moi ban nhap 1 chuoi bat ky: ");
	fgets(str, sizeof(str), stdin);
	printf("in ra chuoi ban vua nhap: %s\n",str);
	printf("do dai cua chuoi la: %d",strlen(str));
	return 0;
}

