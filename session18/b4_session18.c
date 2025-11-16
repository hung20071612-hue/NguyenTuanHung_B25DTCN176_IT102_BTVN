#include<stdio.h>

void print(int *arr, int *size){
	for(int i = 0; i < *size; i++){
		printf("arr[%d] = %d\n",i,*(arr + i));
	}
}
int main(){
	int arr[10] = {1,5,6,2,3,87,9,5,3,19};
	int size = sizeof(arr)/sizeof(int);
	print(arr,&size);
	return 0;
}

