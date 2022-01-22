#include <stdio.h>
int main()
{
	/* Variable to store the returned
value of fgets() function */
	char *file_status;
	char file_contents[256];
	FILE *text_file = fopen("example.txt", "r");
	/* An Infinite while loop
Important because we don't know
when will we encounter the EOF */
	while (1)
	{
		/* Read a line and store the
returned value */
		file_status = fgets(file_contents, 256, text_file);
		/* if fgets() returned NULL
this means we have hit the end.
Now, we need to break the loop */
		if (file_status == NULL)
			break;
		else
			printf("%s", file_contents);
	}
}
