#include <stdio.h>
int main()
{
	int i;
	char a[] = "Hello";
	while (a != '\0')
	{
		printf("%c", *a);
		a++;
	}
	return 0;
}