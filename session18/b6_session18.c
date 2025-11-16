#include<stdio.h>

void findIndex(int *arr, int *number, int *size){
	for(int i = 0; i < *size; i++){
		if(arr[i] == *number){
			printf("so can tim tai index = %d\n",i);
		}
	}
}
int main(){
	int arr[7] = {1,5,6,9,5,3,19};
	int number;
	int size = sizeof(arr)/sizeof(int);
	printf("moi ban nhap so muon tim: ");
	scanf("%d",&number);
	findIndex(arr,&number,&size);
	return 0;
}

