#include<stdio.h>
#include<string.h>
void swap(char *inputString, char *reverseString, int *size){
		strcpy(reverseString,inputString);
		int j = *size - 1;
		int i = 0;
		while(i < j){
			char temp = *(reverseString+i);
			*(reverseString+i) = *(reverseString+j);
			*(reverseString+j) = temp;
			i++;
			j--;
		}
		printf("truoc khi dao nguoc chuoi: %s\n",inputString);
		printf("sau khi dao nguoc chuoi: %s",reverseString);
}
int main(){
	char inputString[100];
	char reverseString[100];
	printf("moi ban nhap 1 chuoi: ");
	fgets(inputString, sizeof(inputString), stdin);
	inputString[strcspn(inputString,"\n")] = 0;
	int size = strlen(inputString);
	swap(inputString,reverseString,&size);
	return 0;
}

