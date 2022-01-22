#include <stdio.h>
#include <conio.h>

int main()
{
	int  n, i, j, minimum, temperory;

	printf(" Enter the size of an array:\n ");
    scanf("%d", &n);

	int array[n];
	printf(" Enter the element: \n ");

	for (i = 0; i < n; i++)
	{
		scanf("%d", &array[i]);
	}

	for (i = 0; i < n-1; i++)
	{
		// Finding the minimum element in unsorted array
		minimum = i;

		for (j = i + 1; j < n; j++)
		{
			if(array[j] < array[minimum])
				minimum = j;	
		}
    //  Swaping the found minimum element with the first element
	   temperory = array[minimum];
	   array[minimum] = array[i];
	   array[i] = temperory;
	}
	for (i = 0; i < n; i++)
	{
		printf(" Enter the sorted array: ");
		printf(" %d \n", array[i]);
	}
	return 0;
}	