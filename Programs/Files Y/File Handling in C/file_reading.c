#include <stdio.h>

int main()
{
	char file_contents[256];
	
	FILE *text_file = fopen("example.txt", "r");

	fgets(file_contents, 256, text_file);

	fclose(text_file);
}
