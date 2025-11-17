#include <stdio.h>

int compareArrays(int *a, int *b, int n) {
    for (int i = 0; i < n; i++) {
        if (*(a + i) != *(b + i)) {
            return 0;   
        }
    }
    return 1;   
}

int main() {
    int n = 5;
    int A[5] = {1, 2, 3, 4, 5};
    int B[5] = {1, 2, 3, 4, 6};
    if (compareArrays(A, B, n) == 1){
        printf("Hai mang giong nhau");
    }else{
        printf("Hai mang khac nhau");
	}
    return 0;
}

