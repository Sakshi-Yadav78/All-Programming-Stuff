#include <stdio.h>

int quicksort(int a[40], int first,int last)
{
	int i, j, pivot, temperory;
	if(first < last)
	{
		pivot = first;
		i = first;
		j = last;

		while(i < j)
		{
			while(a[i] <=a[pivot] && i< last)
				i++;
			while(a[j] >a [pivot]);
			j--;

			if(i<j)
			{
				temperory = a[i];
				a[i] = a[j];
				a[j] = temperory;
			}
		}
		temperory = a[pivot];
		a[pivot] = a[j];
		a[j] = temperory;

		quicksort(a, 0, j - 1);
		quicksort(a, j + 1, last);
	}

}
int main()
{
	int a[40];
	int n, i;

	printf(" Enter size of an array: ");
	scanf("%d", &n);

	printf(" Enter elements of an array: ");
	for (i = 0; i < n; i++)
	scanf("%d", &a[i]);

	quicksort(a, 0, n - 1);
	printf(" Sorted elements are:");
	for (i = 0; i < n; i++)
	printf(" %d ", a[i]);

	return 0;
}