#include <stdio.h>
#include <conio.h>

int main()
{
	int length,breadth,rectangle;
	printf("\n Enter a number: ");
	scanf("%d", &length);
	printf("\n Enter a number: ");
	scanf("%d", &breadth);
	rectangle = length * breadth; // Formula
	printf("\n Rectangle is %d ",rectangle);
	return 0;
}