#include <stdio.h>
#include <string.h>

int main() {
    char str[200], strcp[100];
    printf("Nhap chuoi 1: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    printf("Nhap chuoi 2: ");
    fgets(strcp, sizeof(strcp), stdin);
    strcp[strcspn(strcp, "\n")] = 0; 
    if (strstr(str,strcp) != NULL) {
        printf("Co\n"); 
    } else {
        printf("Khong\n"); 
	}
    return 0;
}
