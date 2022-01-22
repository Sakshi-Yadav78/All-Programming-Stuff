//  To read a number from user and print sum of digits 

#include <stdio.h>
#include <conio.h>

int main(int argc, char **argv[])
{
	int n,m,i, remander,result = 0;

	printf(" Enter any number ");
	scanf("%d",&n);

	m = n;
	while(m > 0)
	{
		remander = m % 10;
		m = m / 10;
		result = result + remander;

	}
	printf(" Sum of digits of %d is %d", n, result);

	return 0;
}