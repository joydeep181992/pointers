#include<stdio.h>
int main() {
	int a = 50;
	int *p;
	p = &a;
	int **q;
	q = &p;
	int ***r;
	r = &q;
	printf("the address of q is %d\n", **q);
	printf("the address of p is %d\n", *p);
	printf("the address of a is %d\n", a);
	printf("the address of r is %d\n", ***r);
	return 0;
}
