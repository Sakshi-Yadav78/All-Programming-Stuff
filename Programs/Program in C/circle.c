#include <stdio.h>
#include <conio.h>

int main()
{
	float pi = 3.14, radius,circle;
    printf("\n Enter a number: ");
	scanf("%f", &radius);
	circle = pi = 3.14 * radius * radius; // Formula of circle
	printf("\n Circle is = %f ",circle);
	return 0;
}