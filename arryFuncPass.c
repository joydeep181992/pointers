#include<stdio.h>
int length(int *a) {
	int len = sizeof(a)/sizeof(a[0]);
	return len;

}
int main() {
	int a[] = {1,2,3,4,5};
//	DoubleTheValue(a);
	int a = length(a);
	printf("The length is %d", a);
	return 0;
}
