#include<stdio.h>
#include<string.h>

int main(){
	char str[100];
	printf("moi ban nhap 1 chuoi bat ky: ");
	fgets(str, sizeof(str), stdin);
	printf("in ra tung ky tu trong chuoi la: ");
	for(int i = 0; i < strlen(str) ; i++){
		printf("%c ",str[i]);
	}
	return 0;
}

