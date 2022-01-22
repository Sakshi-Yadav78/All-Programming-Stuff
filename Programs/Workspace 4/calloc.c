// Dynamic - Which changes states
// Memory - Computer
// Allocation - Create memory

// malloc() - memory allocation , calloc() (create array)
// realloc() and free ()
#include <stdio.h>
#include <stdlib.h>

int main()
{
	// int *array = malloc(sizeof(int) * 10);


	for (int i = 0; i < 10; i++)
		array[i] = 10;

	for (int i = 0; i < 10; i++)
		printf("%d, ", array[i]);

	printf("\n");

	return 0;
}