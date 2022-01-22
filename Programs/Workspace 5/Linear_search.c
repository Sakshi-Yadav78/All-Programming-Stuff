// program of linear search

#include <stdio.h>

int main()
{
	int x, arr[100], i, j, k, c;
	c = 0;

	printf("enter number of array element(less than 100)");
	scanf("%d", &x);
	for (i = 0; i < x; i++)
	{
		printf("enter element no %d\t ", i + 1);
		scanf("%d", &arr[i]);
	}
	printf("enter element to be searched:");
	scanf("%d", &k);
	for (j = 0; j < x; j++)
	{
		if (arr[j] == k)
		{
			printf("\nelement %d found at position %d", k, j + 1);
			c++;
		}
		if (j == (x - 1) && c == 0)
		{
			printf("\n element %d is not present in array", k);
		}
	}
	return 0;
}