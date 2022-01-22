#include <stdio.h>

int main()
{
	int ram, shyam, ajay;
	printf("Enter the age of ram: ");
	scanf("%d", &ram);

	printf("Enter the age of shyam: ");
	scanf("%d", &shyam);

	printf("Enter the age of ajay: ");
	scanf("%d", &ajay);

	if (ram < shyam && ram < ajay)
		printf("Ram is the youngest amongst the three");

	else if (shyam < ram && shyam < ajay)
		printf("Shyam is the youngest amongst the three");

	else if (ajay < ram && ajay < shyam)
		printf("Ajay is the youngest amongst the three");

	return 0;
}