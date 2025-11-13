#include<stdio.h>
#include<string.h>
int main(){
	int choice;
	char str[100];
	printf("moi ban nhap 1 chuoi bat ky: ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = 0;
	do{
		printf("1. chuyen thanh chu thuong\n");
		printf("2. chuyen thanh chu hoa\n");
		printf("moi ban chon cach ban muon: ");
		scanf("%d",&choice);
	switch(choice){
		case 1:
			for (int i = 0; i < strlen(str); i++) {
					if (str[i] >= 'a' && str[i] <= 'z') {
						str[i] = str[i] - 32 ;
					}
				}
				printf ("Chuoi ky tu sau khi chuyen thanh chu hoa la: %s\n",str);
			break;
		case 2:
			for (int i = 0; i < strlen(str); i++) {
					if (str[i] >= 'A' && str[i] <= 'Z') {
						str[i] = str[i] + 32 ;
					}
				}
				printf ("Chuoi ky tu sau khi chuyen thanh chu thuong la: %s\n",str);
				break;
			break;
		}
	}while(choice != 3);
	return 0;
}

