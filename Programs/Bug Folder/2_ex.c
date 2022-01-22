#include <stdio.h>

int do_something(int);



int main()
{
	int i = 4;
	switch (i)
	{
	case 1:
		do_something(1);
		break;
	case 2:
		do_something(2);
		break;
	case 3:
		do_something(3);
		break;
	case 4:
		do_something(4);
		break;
	default:
		break;
	}
	return 0;
}
int do_something(int number)
{
	printf("%d", number);
}