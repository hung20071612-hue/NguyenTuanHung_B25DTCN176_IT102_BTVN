#include<stdio.h>
#include<string.h>
struct Student {
	char name[50];
	int age;
	float grade;
};
int main(){
	struct Student student1;
	printf("moi ban nhap ten: ");
	fgets(student1.name, sizeof(student1.name),stdin);
	student1.name[strcspn(student1.name,"\n")] = 0;
	printf("moi ban nhap tuoi: ");
	scanf("%d",&student1.age);
	getchar();
	printf("moi ban nhap diem trung binh: ");
	scanf("%f",&student1.grade);
	printf("ten cua hoc sinh la: %s\n",student1.name);
	printf("tuoi cua hoc sinh la: %d\n",student1.age);
	printf("diem trung binh cua hoc sinh la: %.2f",student1.grade);
	return 0;
}

