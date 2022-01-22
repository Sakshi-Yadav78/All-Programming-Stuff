#include <stdio.h>

int main()
{
	FILE *text_file = fopen("example.txt", "w");

	fprintf(text_file, "This is a text file. \n");

	fclose(text_file);
}