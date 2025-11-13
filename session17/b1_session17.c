#include<stdio.h>
#include<string.h>

int main(){
	char str[100], strcp[100];
	printf("moi ban nhap 1 chuoi bat ky: ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = 0;
	int i, flag = 0;
	for (i = 0; i < strlen(str); i++) {
		if (str[i] != str[strlen(str) - 1 - i])
		flag = 1;
		break;
		}
	if (flag == 0) {
		printf ("La palindrome");
	} else {
		printf ("Khong phai palindrome");
	}

	return 0;
}
