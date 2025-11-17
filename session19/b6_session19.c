#include <stdio.h>

void copyArray(int *A, int *B, int n) {
    for (int i = 0; i < n; i++) {
        *(B + i) = *(A + i);
    }
    printf("Mang B sau khi sao chep: ");
    for (int i = 0; i < n; i++){
        printf("%d ", *(B+i));
    }
}

int main() {
    int n = 5;
    int A[5] = {10, 20, 30, 40, 50};
    int B[5];
    copyArray(A, B, n);
    return 0;
}

