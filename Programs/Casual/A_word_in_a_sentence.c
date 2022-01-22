#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char str[] = " Apples are good for health ";
	char to_find[] = " good ";

	char *res = strstr(str, to_find);

	if (res)
	{
		printf(" %s\n ", res);
		printf(" The word has been found\n");
	}
	else
	{
		printf(" %s\n ", res);
		printf(" The word has not been found\n");
	}
		return 0;
}