#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	int count = 0;
	printf("moi ban nhap 1 chuoi bat ky: ");
	fgets(str, sizeof(str), stdin);
	for(int i = 0; i < strlen(str); i++){
		if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z'){
			count++;
		}
	}
	printf("so ky tu trong chuoi la: %d",count);
	return 0;
}

