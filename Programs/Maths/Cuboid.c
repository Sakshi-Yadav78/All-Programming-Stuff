#include <stdio.h>
#include <conio.h>

int main()
{
	float length, breadth, height,volume;
	printf("\n Enter value of length ");
	scanf("%f",&length);
	printf("\n Enter value of breadth ");
	scanf("%f", &breadth);
	printf("\n Enter value of height ");
	scanf("%f", &height);
	volume = length*breadth*height;  // Formula of cuboid 
	printf("\n Volume of Cuboid = %0.2f ",volume);
	return 0;
}