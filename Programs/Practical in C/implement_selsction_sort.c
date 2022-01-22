#include <stdio.h>
int main()
{
	int i, j, count, temp, min, number[25];
	printf("How many numbers u are going to enter ? : ");
	scanf("%d", &count);
	printf("Enter %d elements : ", count);
	for (i = 0; i < count; i++)
		scanf("%d", &number[i]);
	for (i = 0; i < count; i++)
	{
		min = i;
		for (j = i + 1; j < count; j++)
		{
			if (number[i] > number[j])
			{
				temp = number[i];
				number[i] = number[j];
				number[j] = temp;
			}
		}
	}
	printf("Sorted elements : ");
	for (i = 0; i < count; i++)
		printf("%d\t", number[i]);
	return 0;
}