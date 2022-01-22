#include <iostream>
#include <array>
using namespace std;

int main()
{
	int myarray[5] = {0, 1, 2, 3, 4};
	int *p;
	p = & myarray[0];

	for (int i = 0; i < 5; i++)
	{
		cout << *p;
		p++;
	}
}