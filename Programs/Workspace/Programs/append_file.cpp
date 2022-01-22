#include <stdio.h>

int main(int argc, char **argv[])
{
	char file[30];
	int x;
	FILE *file_pointer = fopen("example.txt", "a");

	fprintf(file_pointer, "Hey you!\n");

	return 0;
}