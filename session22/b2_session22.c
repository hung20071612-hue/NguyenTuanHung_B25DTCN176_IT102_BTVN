#include<stdio.h>
#include<string.h>

struct member{
	char name[50];
	char phonenumber[15];
	char email[50];
};
struct member list_mem[100];
int n = 0;
void display();
void add_infor();
void display_list();
void find_name();
void delete_name();
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
				display_list();
				break;
			case 3:
				find_name();
				break;
			case 4:
				delete_name();
				break;
			default:
				printf("khong hop le!!!!\n");
			break;
		}
	}while(1);
	return 0;
}
void display(){
	printf("+-------------------------MENU-------------------------+\n");
	printf("|1. Them lien he moi                                   |\n");
	printf("|2. Hien thi tat ca lien he                            |\n");
	printf("|3. Tim kiem theo ten                                  |\n");
	printf("|4. Xoa lien he theo ten                               |\n");
	printf("+------------------------------------------------------+\n");
}
void add_infor(){
	do{
	printf("moi ban nhap so thanh vien muon nhap: ");
	scanf("%d",&n);
	getchar();
	if(n > 100 || n <= 0){
		printf("moi ban nhap lai!!!\n");
		}
	}while(n > 100 || n <= 0);
		for(int i = 0; i < n; i++){
	printf("moi ban nhap ten thanh vien %d: ",i+1);
	fgets(list_mem[i].name, sizeof(list_mem[i].name),stdin);
	list_mem[i].name[strcspn(list_mem[i].name, "\n")] = 0;
	printf("moi ban nhap so dien thoai thanh vien %d: ",i+1);
	fgets(list_mem[i].phonenumber, sizeof(list_mem[i].phonenumber),stdin);
	list_mem[i].phonenumber[strcspn(list_mem[i].phonenumber, "\n")] = 0;
	printf("moi ban nhap email thanh vien %d: ",i+1);
	fgets(list_mem[i].email, sizeof(list_mem[i].email),stdin);
	list_mem[i].email[strcspn(list_mem[i].email, "\n")] = 0;
		}
		printf("ban da nhap thanh cong!!!\n");
}
void display_list(){
	if(n == 0){
		printf("moi ban nhap thong tin thanh vien truoc!!!!!\n");
		return;
	}
	for(int i = 0; i < n; i++){
		printf("+-------------Thanh vien %d-------------+\n", i+1);
        printf("|%-15s%22s|\n", "Ten thanh vien:", list_mem[i].name);
        printf("|%-15s%22s|\n", "Sdt thanh vien:", list_mem[i].phonenumber);
        printf("|%-15s%22s|\n", "Email thanh vien:", list_mem[i].email);
        printf("+-------------------------------------+\n");
	}
}
void find_name(){
	if(n == 0){
		printf("moi ban nhap thong tin thanh vien truoc!!!!!\n");
		return;
	}
	int flag =0;
	char copy_name[50];
	printf("moi ban nhap ten thanh vien muon tim: ");
	fgets(copy_name,sizeof(copy_name),stdin);
	copy_name[strcspn(copy_name, "\n")] = 0;
	for(int i = 0; i < n; i++){
		if(strcmp(list_mem[i].name,copy_name) == 0){
			flag = 1;
			printf("thanh vien ma ban tim la thanh vien %d\n",i+1);
		}
	}
	if(flag == 0){
		printf("khong tim thay thanh vien !!!!!\n");
	}
	
}
void delete_name(){
	if(n == 0){
		printf("moi ban nhap thong tin thanh vien truoc!!!!!\n");
		return;
	}
	int flag1 = 0;
	char copy_name1[50];
	printf("moi ban nhap ten thanh vien muon xoa: ");
	fgets(copy_name1,sizeof(copy_name1),stdin);
	copy_name1[strcspn(copy_name1, "\n")] = 0;
	for(int i = 0; i < n; i++){
		if(strcmp(list_mem[i].name,copy_name1) == 0){
			flag1 = 1;
			for(int j = i; j < n; j++){
			strcpy(list_mem[j].name,list_mem[j+1].name);
			strcpy(list_mem[j].phonenumber,list_mem[j+1].phonenumber);
			strcpy(list_mem[j].email,list_mem[j+1].email);
			}
		n--;
		}
	}
	if(flag1 == 0){
		printf("khong tim thay ten de xoa thong tin");
	}
}

