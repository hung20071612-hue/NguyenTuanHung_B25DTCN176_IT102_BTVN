#include<stdio.h>

void sort(int *inputString, int *reverseString, int *size1, int *size2){
	for(int i = 0; i < *size1; i++){
		reverseString[i] = inputString[i];
	}
	for(int i = 0; i < *size2; i++){
		for(int j = 0; j < *size2 - 1 - i; j++){
			if(reverseString[j] > reverseString[j+1]){
				int temp = *(reverseString+j);
				*(reverseString+j) = *(reverseString+(j+1));
				*(reverseString+(j+1)) = temp;
			}
		}
	}
	for(int i = 0; i < *size1; i++){
		printf("%d ",*(inputString + i));
	}
	printf("\n");
	for(int i = 0; i < *size2; i++){
		printf("%d ",*(reverseString + i));
	}
}
int main(){
	int inputString[7] = {1,5,6,9,5,3,19};
	int reverseString[7];
	int size1 = sizeof(inputString)/sizeof(int);
	int size2 = sizeof(reverseString)/sizeof(int);
	sort(inputString,reverseString,&size1,&size2);
	return 0;
}

