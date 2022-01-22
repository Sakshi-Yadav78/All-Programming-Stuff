#include <stdio.h>

int main(int argc, char **argv[])
{
	char file[30];
	int x;
	FILE *file_pointer = fopen("example.txt", "r");

	fgets(file_pointer, 30,file_pointer);
	scanf("%d", &x);

	return 0;
}