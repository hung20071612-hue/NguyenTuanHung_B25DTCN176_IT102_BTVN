#include<stdio.h>

void countEvenOdd(int *arr, int *size, int *even, int *odd){
	for(int i = 0; i < *size; i++){
		if(*(arr+i) % 2 == 0){
			(*even)++;
		}else{
			(*odd)++;
		}
	}
	printf("so chan trong mang la: %d\n",*even);
	printf("so le trong mang la: %d",*odd);
}
int main(){
	int arr[8] = {5,7,2,9,5,6,3,8};
	int size = sizeof(arr)/sizeof(int);
	int even = 0,odd = 0;
	countEvenOdd(arr,&size,&even,&odd);
	return 0;
}

