#include <stdio.h>

int main()
{
	char *file_status;
	char file_contents[256];
	FILE *text_file = fopen("example.txt", "r");
	while (1)
	{
		file_status = fgets(file_contents, 256, text_file);
		if (file_status == NULL)
			break;
		else
			printf("%s", file_contents);
	}
}
