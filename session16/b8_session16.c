#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	int count = 1;
	printf("moi ban nhap 1 chuoi bat ky: ");
	fgets(str, sizeof(str), stdin);
	str[0] = str[0] - 32;
	for(int i = 0; i < strlen(str); i++ ){
		if(str[i] == ' '){
			str[i+1] = str[i+1] - 32;
		}
	}
	printf("%s",str);
	return 0;
}

