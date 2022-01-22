#include <stdio.h>
main()
{
	int a[5], i, j, temp;
	printf("Enter elements in array: ");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 1; i < 5; i++)
	{
		temp = a[i];
		j = i - 1;
		while ((j >= 0) && (a[j] > temp))
		{
			a[j + 1] = a[j];
			j = j - 1;
		}
		a[j + 1] = temp;
	}
	printf("The sorted array is: ");
	for (i = 0; i < 5; i++)
	{
		printf("%d\t", a[i]);
	}
	return 0;
}