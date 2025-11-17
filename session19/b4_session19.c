#include<stdio.h>
void countValue(int *arr, int size, int *x){
	int count = 0;
	for(int i = 0; i < size; i++){
		if(*(arr+i) == *x){
			count++;
		}
	}
	printf("so %d xuat hien %d lan trong mang!!",*x,count);
}
int main(){
	int arr[10] = {5,6,2,7,8,1,8,9,2,5};
	int x,size = sizeof(arr)/sizeof(int); 
	printf("moi ban nhap so muon tim: ");
	scanf("%d",&x);
	countValue(arr,size,&x);
	return 0;
}

