#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int i, j, num = 1;
	for (i = 0; i < 6; i++)
	{
		for (j = 0; j <= i; j++)
		{
			cout << num << "  ";
			num++;
		}
		cout << endl;
	}
	return 0;
}