#include<stdio.h>
#include<string.h>

int main(){
	char str[100];
	printf("moi ban nhap 1 chuoi bat ky: ");
	fgets(str, sizeof(str), stdin);
	int j = strlen(str) - 1, i = 0;
	while(i <= j){
		int temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		j--;
		i++;
	}
	printf("chuoi dao nguoc la: %s",str);
	return 0;
}

