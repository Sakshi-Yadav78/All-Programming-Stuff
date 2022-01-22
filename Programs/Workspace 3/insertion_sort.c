#include <stdio.h>

int main()
{
	int i, j, n, temperory;

	printf(" Enter the number of elements in an array: ");
	scanf("%d", &n);

	int array[n];

	printf(" Enter the elements: \n ");
	for (i = 0; i < n; i++)
	scanf("%d", &array[i]);

	// Implemention of Insertion Sort
	for (i = 1; i < n; i++)
	{
		temperory = array[i];
		j = i - 1;
		while((temperory < array[j]) && (j >= 0))
		{
			array[j + 1] = array[j];
			j = j - 1;
		}
		array[j+1] = temperory;
	}
	printf(" The sorted array: \n ");
	for(i = 0; i < n; i++)
	    printf(" %d ", array[i]);

   return 0;
}
