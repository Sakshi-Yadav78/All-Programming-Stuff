// To read a number from user and print factors of the number 

#include <stdio.h>
#include <conio.h>

int main()
{
	int input, i;
	printf(" Enter any number: ");
	scanf("%d", &input);

	for (i = 1; i <= input; i++)
	{
		if (input%i == 0)
		   printf(" %d", i);
	}
 return 0;
}