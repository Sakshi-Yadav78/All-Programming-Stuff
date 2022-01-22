#include <stdio.h>

int main()
{
	FILE *text_file = fopen("example.txt", "a");

	fprintf(text_file, " nThis is a text file. n");
	
	fclose(text_file);
}