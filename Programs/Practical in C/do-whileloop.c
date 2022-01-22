#include <stdio.h>

int main()
{

	/* Initialize starting number */
	int num = 1;

	/* Initialize target number */
	int target = 10;

	//Start do while loop
	do
	{
		/*
		* Print numbers on console
		* use escape sequence \n to print
		* Next number in new line
		*/

		printf("%d\n", num);

		//increment the number by 1
		++num;

		//once number is > target in while condition
		//then control will be out of loop
	} while (num <= target);

	return 0;
}