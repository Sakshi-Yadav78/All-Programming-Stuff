#include <stdio.h>
#include <conio.h>

int main()
{
	float radius,sphere;
	printf("\n Enter the value of radius: ");
	scanf("%f",&radius);
	sphere = (4/3)*3.14*radius*radius*radius;  // Formula of sphere equation
	printf("\n Volume of sphere is:%f",sphere);
	return 0;
}