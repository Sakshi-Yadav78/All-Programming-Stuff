// To read a number and print reverse of it 

#include <stdio.h>
#include <conio.h>

int main(int argc, char **argv[])
{
	int n, reverse = 0, reminder, m;

	printf(" Enter any number");
	scanf("%d", &n);

	m = n;

	while ( m > 0 )
	{
		reminder = m % 10;
		m = m / 10;
		reverse = reverse * 10 + reminder;
	}

	printf(" Reverse of %d is %d ", n , reverse);

	return 0;
}