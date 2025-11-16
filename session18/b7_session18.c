#include<stdio.h>

void sort(int *arr, int *size){
	for(int i = 0; i < *size; i++){
		for(int j = 0; j < *size - 1 - i; j++){
			if(arr[j] > arr[j+1]){
				int temp = *(arr+j);
				*(arr+j) = *(arr+(j+1));
				*(arr+(j+1)) = temp;
			}
		}
	}
	for(int i = 0; i < *size; i++){
		printf("arr[%d] = %d\n",i,*(arr + i));
	}
}
int main(){
	int arr[7] = {1,5,6,9,5,3,19};
	int size = sizeof(arr)/sizeof(int);
	sort(arr,&size);
	return 0;
}

