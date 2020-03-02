#include<stdio.h>
int len(int a[], int sizeOfArray) {
	/*printf("%d\n", a[]);*/
	int n = sizeOfArray/sizeof(a[0]);
	return n;
}
int main() {
	int a[] = {5,2,7,3,1,9};
	int i;
	int n = sizeof(a)/sizeof(a[0]);
	int sizeOfArray = sizeof(a);
	/*printf("%d", n);*/
	int length = len(a, sizeOfArray);
	printf("%d\n", length);
}
