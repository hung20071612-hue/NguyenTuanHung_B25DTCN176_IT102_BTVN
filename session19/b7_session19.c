#include<stdio.h>
#define MAX 100

int create_arr(int *arr, int *size){//tao mang 
	printf("Moi ban nhap so phan tu cua mang: ");
	scanf("%d",size);
	if(*size <= 0 || *size > 100 ){
		printf("So phan tu khong hop le");
		return 0;
	}
	for(int i = 0; i < *size; i++){
		printf("arr[%d] = ",i);
		scanf("%d",(arr+i));
	}
	return 1;
}
void display_arr(int *arr, int size){//hien thi mang
	if(size <= 0){
		printf("Mang rong!!\n");
		return;
	}
	printf("Cac phan tu trong mang la: ");
	for(int i = 0; i < size; i++){
		printf("%d ",*(arr+i));
	}
	printf("\n");
}
void length_arr(int *arr, int size){
	if(size == 0){
		printf("Mang rong!!\n");
		return;
	}
	printf("Do dai cua mang la: %d\n",size);
}
void sum_arr(int *arr, int size){
	if(size == 0){
		printf("Mang rong!!\n");
		return;
	}
	int sum;
	for(int i =0; i < size; i++){
		sum += *(arr+i);
	}
	printf("Tong cac phan tu trong mang: %d\n",sum);
}
void findMax(int *arr, int size){
	if(size == 0){
		printf("Mang rong!!\n");
		return;
	}
	int max = arr[0];
	for(int i = 0; i < size; i++){
		if(*(arr+i) > max){
			max = arr[i];
		}
	}
	printf("so lon nhat trong mang la: %d\n",max);
}
int main(){
	int choice;
	int size = 0,arr[MAX];
	do{
		printf("+-----------------menu----------------+\n");
		printf("|1.Nhap vao so phan tu và tung phan tu|\n");
		printf("|2.Hien thi cac phan tu trong mang    |\n");
		printf("|3.Tinh do dai mang                   |\n");
		printf("|4.Tinh tong cac phan tu trong mang   |\n");
		printf("|5.Hien thi phan tu lon nhat          |\n");
		printf("|6.Thoat                              |\n");
		printf("+-------------------------------------+\n");
		printf("moi ban nhap lua chon: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				create_arr(arr,&size);
				break;
			case 2:
				display_arr(arr,size);
				break;
			case 3:
				length_arr(arr,size);
				break;
			case 4:
				sum_arr(arr,size);
				break;
			case 5:
				findMax(arr,size);
				break;
			default:
				if(choice > 6){
					printf("moi ban nhap lai!!!!\n");
				}
				break;
		}
	}while(choice != 6);
	return 0;
}

