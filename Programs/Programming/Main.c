#include <stdio.h>

int main()
{
	int number;
	printf("Enter a number:");
	scanf("%d", &number);

	if (number == 1)
		printf("You entered 1 \n");
	else if (number == 2)
	    printf("You entered 2 \n");
	else if (number == 3)
		printf("You entered 3 \n");
	else if (number == 4)
		printf("You entered 4 \n");
	else if (number == 5)
		printf("You entered 5 \n");
	else if (number == 6)
	    printf("You entered 6 \n");
    else
	    printf("You entered a random number \n");

	return 0;	
}