#include<stdio.h>
void print(char *a) {
	while(*a != '\0'){
		printf("%c", *a);
		a++;
	}
	printf("\n");

}
void main() {
	char a[20] = "Joydeep";
	print(a);
}
