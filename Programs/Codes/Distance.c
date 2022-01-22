#include <stdio.h>

int main()
{
	float distance_in_km;
	float distance_in_meters;
	float distance_in_centimeters;
	float distance_in_feet;
	float distance_in_inches;

	printf("Enter your distance between two cities (in km): ");
	scanf("%f", &distance_in_km);

	distance_in_meters = distance_in_km * 1000;
	distance_in_centimeters = distance_in_meters * 100;
	distance_in_feet = distance_in_centimeters * 0.032808;
	distance_in_inches = distance_in_feet * 12;

	printf("Your distance between two cities in meters is %f\n", distance_in_meters);
	printf("Your distance between two cities is centimeters %f\n", distance_in_centimeters);
	printf("Your distance between two cities is in feet %f\n", distance_in_feet);
	printf("Your distance between two cities is in inches %f\n", distance_in_inches);

	return 0;
}