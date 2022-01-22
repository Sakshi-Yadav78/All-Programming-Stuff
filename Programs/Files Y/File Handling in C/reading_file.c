#include <stdio.h>
int main()
{
	char file_contents[256];
	/* A string to store the text returned
by the fgets() function.*/
	/* The FILE struct variable for
storing the file data */
	FILE *text_file = fopen("example.txt", "r");
	fgets(file_contents, 256, text_file);
	/* This function will read a single
line of text from the file and store
it in a character array */
	/* All operations done, close the file */
	fclose(text_file);
}
