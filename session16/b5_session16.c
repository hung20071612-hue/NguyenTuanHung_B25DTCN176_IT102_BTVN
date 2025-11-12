#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	int count = 1;
	printf("moi ban nhap 1 chuoi bat ky: ");
	fgets(str, sizeof(str), stdin);
	for(int i = 0; i < strlen(str); i++ ){
		if(str[i] == ' '){
			count++;
		}
	}
	printf("so tu co trong chuoi la: %d",count);
	return 0;
}

