#include <iostream>
#include <conio.h>
using namespace std;

int main(int)

{

	int n = 7, j, p;

	cout << "**Table Of 7**" << endl;

	for (j = 1; j < 11; j++)

	{

		p = n * j;

		cout << "" << n << "*"
			 << "" << j << "="
			 << "" << p << endl;
	}

	return 0;
}