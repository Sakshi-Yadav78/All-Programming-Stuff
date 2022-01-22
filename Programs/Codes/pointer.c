#include <stdio.h>

int main()
{
	int x = 3;
	int *pointer = &x;

	printf("x = %d\n", *pointer);
	printf("Address of x = %u\n", pointer);

	return 0;
}