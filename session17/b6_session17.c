#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char word[50], longest[50];
    int maxLen = 0, i = 0, j = 0;
    printf("Nhap vao mot chuoi bat ky: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    while (1) {
        if (str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i];
        } else {
            word[j] = '\0'; 
            if (j > maxLen) {
                maxLen = j;
                strcpy(longest, word);
            }
            j = 0; 
        }
        if (str[i] == '\0'){
        	break;
		}
        i++;
    }
    printf("Tu dai nhat: \"%s\"\n", longest);
    printf("Do dai cua tu: %d\n", maxLen);

    return 0;
}

