#include<stdio.h>
#include<string.h>
void main() {
	char* a[6] = {"J", "O", "Y", "\0"};
	int i;
	for(i=0; i < 4; i++) 
	{
		printf("%s", *(a+i));
	}
	printf("\n");
}
