#include <stdio.h>

void xgets(char *str)
{
	scanf("%[^\n]s", str);
}

void xputs(char *str)
{
	printf("%s\n", str);
}

/*By putting [^\n] inbetween % and s in scanf() function
will cause the function to accept even string after enter
has hit*/