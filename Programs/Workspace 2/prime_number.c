//  To read a number & check if it is prime or not

#include <stdio.h>
#include <conio.h>

int main()
{
	int input, i, count = 0;

	printf(" Enter any number: ");
	scanf("%d", &input);

	for (i = 1; i <= input; i++)
	{
		if (input % i == 0)
			count++;

	}
	if (count == 2)
		printf(" %d is PRIME Number ", input);
	else
	printf(" %d is NOT A PRIME Number ", input);

	return 0;
}