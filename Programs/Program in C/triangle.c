#include <stdio.h>
#include <conio.h>

int main()
{
	int base,height,triangle;
	printf("\n Enter a number: ");
	scanf("%d",&base);
	printf("\n Enter a number: ");
	scanf("%d",&height);
	triangle = base*height; // Formula of triangle
	printf("\n Triangle is = %d ",triangle);
	return 0;
}