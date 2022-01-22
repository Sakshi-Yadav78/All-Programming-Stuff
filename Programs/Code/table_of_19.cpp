#include <iostream>
using namespace std;

int main(int)

{

	int n = 19, j, p;

	cout << "**Table Of 19**" << endl;

	for (j = 1; j < 11; j++)

	{

		p = n * j;

		cout << "" << n << "*"
			 << "" << j << "="
			 << "" << p << endl;
	}

	return 0;
}