#include<stdio.h>

void findMax(int *arr, int *size){
	int max = arr[0];
	for(int i = 0; i < *size; i++){
		if(*(arr+i) > max){
			max = *(arr+i);
		}
	}
	printf("so lon nhat trong mang la: %d",max);
}
int main(){
	int arr[7] = {3,5,3,7,1,7,8};
	int size = sizeof(arr)/sizeof(int);
	findMax(arr,&size);
	return 0;
}

