#include<stdio.h>
int main() {
	int a = 1025;
	int *p;
	p = &a;
	char *p0;
	p0 = (char *)p;
	printf("The value a character pointer is %d\n", *p0);
	return 0;
}
