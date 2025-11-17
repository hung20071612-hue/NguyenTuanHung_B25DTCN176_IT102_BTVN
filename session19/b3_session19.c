#include<stdio.h>
void average(int *arr, int size){
	int sum;
	for(int i =0; i < size; i++){
		sum += *(arr+i);
	}
	float ave = (float)sum/size;
	printf("trung binh tong cac phan tu trong mang: %.2f",ave);
}
int main(){
	int arr[10] = {5,6,2,7,8,1,8,9,2,5};
	int size = sizeof(arr)/sizeof(int);
	average(arr,size);
	return 0;
}

