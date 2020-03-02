#include<stdio.h>
void Increment(int *p) {
	*p = *p + 1;
}
int main() {
	int a = 20;
	Increment(&a);
	printf("The value of a after increment is %d\n", a);
}
