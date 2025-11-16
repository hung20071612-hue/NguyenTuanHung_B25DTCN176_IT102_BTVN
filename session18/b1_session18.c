#include<stdio.h>
#include<string.h>
int main(){
	int a = 4;
	int *aptr = &a;
	printf("dia chi cua bien a : %p\n",&a);
	printf("dia chi cua bien a : %p",aptr);
	return 0;
}

