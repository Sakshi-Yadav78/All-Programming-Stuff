#include <stdio.h>

int main()
{
	int Integer;
	float Inputfloat;

	printf("Enter an integer: ");
	printf("Enter an float: ");

	scanf("%d", &Integer);
	scanf("%f", &Inputfloat);

	printf("You entered: %d", Integer);
	printf("You entered: %f", Inputfloat);

	return 0;
}