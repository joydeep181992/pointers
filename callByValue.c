#include<stdio.h>
void Increment(int p) {
	p = p + 1;
}
int main() {
	int a = 10;
	Increment(a);
	printf("the value of a after the increment %d\n", a);
	return 0;
}
