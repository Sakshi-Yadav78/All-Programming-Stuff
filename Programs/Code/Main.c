#include <stdio.h>

int main()
{
	for (int i = 0U; i < 255U; i++)
		printf("%d) %c", i + 1, i);

	return 0;
}