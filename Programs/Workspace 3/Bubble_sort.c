#include <stdio.h>
#include<conio.h>

int main(int argc, char *argv[])
{
	int a[5] = {2, 21, 12, 10, 4};
	int n, i, j, k, b, temperory;

	printf(" This are the elements of the array: ");

	for (i = 0; i < 5; i++)
	{
		printf(" %d ",a[i]);
	}

	for (int b = 0; b < n; b++)
	{
	for (int k = 0; k < n - 1; k++)
	{
		if (a[k] > a[k+1])
		{
			temperory = a[k];
			a[k] = a[k + 1];
			a[k + 1] = temperory;
		}
	}

	if(a[0] > a[1])
	{
		temperory = a[0];
		a[0] = a[1];
		a[1] = temperory;
	}
	}
	printf(" This is the sorted array ");
	for(j=0; j < n; j++)
	{
		printf(" %d\t", a[j]);
	}
	return 0;
}