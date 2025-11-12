#include<stdio.h>
#include<string.h>

int main(){
	char str[100];
	printf("moi ban nhap 1 chuoi bat ky: ");
	fgets(str, sizeof(str), stdin);
	char charac;
	int count = 0;
	printf("moi ban nhap ky tu muon tim: ");
	scanf("%c",&charac);
	for(int i = 0; i < strlen(str); i++ ){
		if(charac == str[i]){
			count++;
		}
	}
	if(count == 0){
		printf("khong tim thay ki tu");
		return 0;
	}
	printf("ki tu %c xuat hien %d",charac,count);
	return 0;
}

