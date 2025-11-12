#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	int count_char = 0;
	int count_spe = 0;
	int count_num = 0;
	printf("moi ban nhap 1 chuoi bat ky: ");
	fgets(str, sizeof(str), stdin);
	for(int i = 0; i < strlen(str); i++){
		if(str[i] >= 'a' && str[i] < 'z' || str[i] >= 'A' && str[i] < 'Z'){
			count_char++;
		}else if(str[i] >= '0' && str[i] <='9'){
			count_num++;
		}else{
			count_spe++;
		}
	}
	printf("so ky tu trong chuoi la: %d\n",count_char);
	printf("so chu so trong chuoi la: %d\n",count_num);
	printf("so ky tu dac biet trong chuoi la: %d\n",count_spe);
	return 0;
}

