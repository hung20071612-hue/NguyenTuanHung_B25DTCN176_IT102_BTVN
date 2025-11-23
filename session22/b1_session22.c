#include<stdio.h>
#include<string.h>
struct Student{
	char name[50];
	int age;
	float grade;
};
struct Student list_stu[0];
int n = 0;
void display(){
	printf("+-------------------------MENU-------------------------+\n");
	printf("|1. Nhap thong tin hoc sinh                            |\n");
	printf("|2. Hien thi thong tin sinh vien                       |\n");
	printf("|3. Tinh diem trung binh cua tat ca hoc sinh           |\n");
	printf("+------------------------------------------------------+\n");
}
void add_infor(){
	n++;
	printf("moi ban nhap ten hoc sinh %d: ",n);
	fgets(list_stu[n].name, sizeof(list_stu[n].name),stdin);
	list_stu[n].name[strcspn(list_stu[n].name, "\n")] = 0;
	printf("moi ban nhap tuoi hoc sinh %d: ",n);
	scanf("%d",&list_stu[n].age);
	getchar();
	printf("moi ban nhap diem hoc sinh %d: ",n);
	scanf("%f",&list_stu[n].grade);
	getchar();
}
void display_stu(){
	if(n == 0){
		printf("moi ban nhap thong tin hoc sinh truoc!!!!!\n");
		return;
	}
	for(int i = 0; i < n; i++){
		printf("ten cua hoc sinh %d: %s\n",i+1,list_stu[i].name);
		printf("tuoi cua hoc sinh %d: %d\n",i+1,list_stu[i].age);
		printf("diem cua hoc sinh %d: %f\n",i+1,list_stu[i].grade);
	}
}
void ave_stu(){
	if(n == 0){
		printf("moi ban nhap thong tin hoc sinh truoc!!!!!\n");
		return;
	}
	int sum = 0;
	float ave;
	for(int i = 0; i < n; i++){
		sum += list_stu[i].grade;
	}
	ave = (float)sum/n;
	printf("diem trung binh cua tat ca hoc sinh la: %.2f\n",ave);
}
int main(){
	int choice;
	do{
		display();
		printf("moi ban nhap lua chon: ");
		scanf("%d",&choice);
		getchar();
		switch(choice){
			case 1:
				add_infor();
				break;
			case 2:
				display_stu();
				break;
			case 3:
				ave_stu();
				break;
			default:
				printf("khong hop le!!!!\n");
			break;
		}
	}while(1);
	return 0;
}

