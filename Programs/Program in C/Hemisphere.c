#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	int radius,pi=3.14,volume;
	printf("\n Enter value of radius: ");
	scanf("%d",&radius);
	volume = (2/3)* 3.14 *radius*radius*radius;  // Formula of hemisphere
	printf("\n Volume of Hemisphere = %d ",volume);
	return 0;
}