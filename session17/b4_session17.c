#include<stdio.h>
#include<string.h>

int main(){
	char charac,str[100];
	int i,j;
	printf("moi ban nhap 1 chuoi bat ky: ");
	fgets(str, sizeof(str), stdin);
	printf("moi ban nhap ki ty muon xoa: ");
	scanf(" %c",&charac);
	int size = strlen(str);
	for(int i = 0; i < size; i++){
		if(str[i] == charac){
			for(int j = i; j < size; j++){
				str[j] = str[j+1];
			}
		}
		size--;
	}
	printf("chuoi sau khi xoa: %s",str);
	return 0;
}

