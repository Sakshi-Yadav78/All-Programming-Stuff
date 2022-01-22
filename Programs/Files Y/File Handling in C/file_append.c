#include <stdio.h>
int main()
{
	FILE *text_file = fopen("example.txt", "a");
	/* The difference is here, instead of
"w" there's "a" for append mode */

	fprintf(text_file, " nThis is a text file. n");
	fclose(text_file);
}