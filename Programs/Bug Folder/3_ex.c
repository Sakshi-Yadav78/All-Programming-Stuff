#include <stdio.h>

void program_1();
void program_2();
int main(int argc, char **argv)
{
	program_1();

	return 0;
}

void program_1()
{
	int i;
	char string[] = "hello";

	printf("Hello World");
	scanf("%d");
}

void program_2()
{
	int j;
	char string[] = "hi";

	printf("Hi");
	scanf("%d");
}