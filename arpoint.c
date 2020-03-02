#include<stdio.h>
int main() {
	int i;
	int A[] = {1,2,43,4,5};
	for (i=0; i<5; i++) {
		printf("Array is %d\n", &A[i]);
		printf("Array is %d\n", *(A+i));
		printf("Array is %d\n", A[i]);
		printf("----------------\n");
	}
	return 0;
}
