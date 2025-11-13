#include<stdio.h>
#include<string.h>
int main(){
	char str[100], strcp[100];
	printf("moi ban nhap 1 chuoi bat ky o chuoi 1: ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = 0;
	
	printf("moi ban nhap 1 chuoi bat ky o chuoi 2: ");
	fgets(strcp, sizeof(strcp), stdin);
	strcp[strcspn(strcp, "\n")] = 0;
	int size1 = strlen(str);
	int size2 = strlen(strcp);
	for(int i = 0; i < size1; i++){
		if(str[i] >= 'a' && str[i] <= 'z'){
			str[i] = str[i] - 32;
		}
	}
	for(int i = 0; i < size2; i++){
		if(strcp[i] >= 'a' && strcp[i] <= 'z'){
			strcp[i] = strcp[i] - 32;
		}
	}
	if(strcmp(str,strcp) == 0){
		printf("2 chuoi giong nhau!!");
		return 0;
	}
	printf("2 chuoi khong giong nhau!!");
	return 0;
}

