#include<stdio.h>
#include<math.h>
#define MAX 100

int create_arr(int *arr, int *size){
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
void displayEven(int *arr, int size){// hien thi so chan
	if(size <= 0){
		printf("Mang rong!!\n");
		return;
	}
	printf("so chan trong mang la: ");
	for(int i = 0; i < size; i++){
		if(*(arr+i) % 2 == 0){
			printf("%d ",*(arr+i));
		}
	}
	printf("\n");
}
void displayprime(int *arr, int size){// so nguyen to
	if(size <= 0){
		printf("Mang rong!!\n");
		return;
	}
	printf("cac so nguyen to la: ");
	for (int i = 0; i < size; i++) {
        int flag = 1;
        if (*(arr+1) < 2){
            flag = 0;
    	}else {
            for (int j = 2; j <= sqrt(*(arr+i)); j++) {
                if (*(arr+i) % j == 0) {
                    flag = 0;
                    break;
                }
            }
        }
        if (flag == 1)
            printf("%d ", *(arr+i));
    }
    printf("\n");
}
void swap(int *arr, int size){//dao nguoc mang
	if(size <= 0){
		printf("Mang rong!!\n");
		return;
	}
	int j = size - 1;
	int i = 0;
	while(i < j){
		int temp = *(arr+i);
		*(arr+i) = *(arr+j);
		*(arr+j) = temp;
		i++;
		j--;
	}
	printf("Mang sau khi dao nguoc la: ");
	for(int i = 0; i < size; i++){
		printf("%d ",*(arr+i));
	}
	printf("\n");
}
void sortup(int *arr, int size){// tang dan
	if(size <= 0){
		printf("Mang rong!!\n");
		return;
	}
	for(int i = 0; i < size; i++){
		for(int j = 0; j < size - 1 - i; j++){
			if(*(arr+j) > *(arr+j+1)){
				int temp = *(arr+j);
				*(arr+j) = *(arr+j+1);
				*(arr+j+1) = temp;
			}
		}
	}
	printf("Mang sau khi sap xep la: ");
	for(int i = 0; i < size; i++){
		printf("%d ",*(arr+i));
	}
	printf("\n");
}
void sortdown(int *arr, int size){// giam dan
	if(size <= 0){
		printf("Mang rong!!\n");
		return;
	}
	for(int i = 0; i < size; i++){
		for(int j = 0; j < size - 1 - i; j++){
			if(*(arr+j) < *(arr+j+1)){
				int temp = *(arr+j);
				*(arr+j) = *(arr+j+1);
				*(arr+j+1) = temp;
			}
		}
	}
	printf("Mang sau khi sap xep la: ");
	for(int i = 0; i < size; i++){
		printf("%d ",*(arr+i));
	}
	printf("\n");
}
void findnumber(int *arr, int size){
	if(size <= 0){
		printf("Mang rong!!\n");
		return;
	}
	int number;
	printf("moi ban chon so muon tim: ");
	scanf("%d",&number);
	int flag = 0;
	for(int i = 0; i < size; i++){
		if(*(arr+i) == number){
			flag = 1;
			printf("so %d can tim tai index = %d!!\n",number,i);
		}
	}
	if(flag == 0){
		printf("khong tim thay so!!!!\n");
	}
	printf("\n");
}
int main(){
	int choice;
	char choice_case5;
	int size = 0,arr[MAX];
	do{
		printf("+------------------------------------MENU--------------------------+\n");
		printf("|1.Nhap vao so phan tu và tung phan tu                             |\n");
		printf("|2.Hien thi cac so chan trong mang                                 |\n");
		printf("|3.Hien thi cac so nguyen to trong mang                            |\n");
		printf("|4.Dao nguoc mang                                                  |\n");
		printf("|5.Sap xep mang                                                    |\n");
		printf("|6.Nhap vao mot phan tu và tim kiem phan tu trong mang             |\n");
		printf("|7.Thoat                                                           |\n");
		printf("+------------------------------------------------------------------+\n");
		printf("moi ban nhap lua chon: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				create_arr(arr,&size);
				break;
			case 2:
				displayEven(arr,size);
				break;
			case 3:
				displayprime(arr,size);
				break;
			case 4:
				swap(arr,size);
				break;
			case 5:
				getchar();
				printf("moi ban nhap lua chon cach sap xep: ");
				scanf("%c",&choice_case5);
				switch(choice_case5){
				case 'a':
					sortup(arr,size);
					break;
				case 'b':
					sortdown(arr,size);
					break;		
				}
				break;
			case 6:
				findnumber(arr,size);
				break;
			default:
				if(choice > 7){
					printf("moi ban nhap lai!!!!\n");
				}
				break;
		}
	}while(choice != 7);
	return 0;
}

