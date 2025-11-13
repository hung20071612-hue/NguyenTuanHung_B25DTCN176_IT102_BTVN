#include<stdio.h>
#include<string.h>
int main(){
	char str[100], strcp[100];
	printf("moi ban nhap 1 chuoi bat ky o chuoi 1: ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = 0;
	printf("moi ban nhap 1 chuoi bat ky o chuoi 2: ");
	fgets(strcp, sizeof(strcp), stdin);
	str[strcspn(strcp, "\n")] = 0;
	strcat(str,strcp);
	printf("chuoi sau khi noi la: %s",str);
	return 0;
}

