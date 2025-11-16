#include<stdio.h>

void updateIndex(int *arr, int *index, int *number, int *size){
	arr[*index] = *number;
	printf("mang sau khi chinh sua:\n");
	for(int i = 0; i < *size; i++){
		printf("arr[%d] = %d\n",i,*(arr + i));
	}
}
int main(){
	int arr[7] = {1,5,6,9,5,3,19};
	int number,index;
	int size = sizeof(arr)/sizeof(int);
	printf("moi ban nhap so muon cap nhat: ");
	scanf("%d",&number);
	printf("moi ban nhap index muon cap nhat: ");
	scanf("%d",&index);
	updateIndex(arr,&index,&number,&size);
	return 0;
}

