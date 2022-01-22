#include <stdio.h>
#include <conio.h>

int main(int argc, char **argv[])
{
	int a[20];
	int n, i, j, k, b, temperory;

	printf(" Enter the size of array: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		printf(" Enter element: ");
		scanf("%d", &a[i]);
	}

	for (int b = 0; b < n; b++)
	{
		for (int k = 0; k < n - 1; k++)
		{
			if (a[k] > a[k + 1])
			{
				temperory = a[k];
				a[k] = a[k + 1];
				a[k + 1] = temperory;
			}
		}

		if (a[0] > a[1])
		{
			temperory = a[0];
			a[0] = a[1];
			a[1] = temperory;
		}
	}

	for (j = 0; j < n; j++)
	{
		printf(" %d\t", a[j]);
	}
	return 0;
}