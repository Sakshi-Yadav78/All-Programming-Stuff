#include <stdio.h>

int main()
{
	int numbers[5] = {0, 1, 2, 3, 4};

	printf(" This is a unsorted array of numbers.\n");

	for (int i = 0; i < 5; i++)
		printf(" %d", numbers[i]);

	// Sorting the array 
	printf(" This is the sorted array of numbers.\n");

	for (int i = 0; i < 5; i++)
	printf(" %d", numbers[i]);

	return 0;
}
