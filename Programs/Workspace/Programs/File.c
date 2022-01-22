#include <stdio.h>

int main(int argc, char **argv[])
{
	char file[30];
	int x;
	FILE *file_pointer = fopen("example.txt", "w");

	fprintf(file_pointer, "Hi there!\n");

	return 0;
}