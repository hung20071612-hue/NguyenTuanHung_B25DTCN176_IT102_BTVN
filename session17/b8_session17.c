#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main () {
	
	char str[100];
	int i, count_up = 0, count_int = 0, count_low = 0, count_db = 0; 
	printf ("Nhap mat khau: ");
	fgets (str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	for (i = 0; i < strlen(str); i++) {
		if (isupper(str[i])) {
			count_up++;
		} else if (isdigit(str[i])) {
			count_int++;
		} else if (islower(str[i])) {
			count_low++;
		} else if (ispunct(str[i])) {
			count_db++;
		}
	}
	if (count_up > 0 && count_int > 0 && count_low > 0 && count_db > 0) {
		printf("Hop le");
	} else {
		printf ("Khong hop le");
	}
	
	return 0;
}

