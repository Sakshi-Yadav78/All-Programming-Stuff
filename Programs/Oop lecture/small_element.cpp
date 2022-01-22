#include <iostream>
using namespace std;

int main()
{
	int i, j, temp;
	
	int c[5];
	for (i = 0; i < 5; i++)
	{
		cin >> c[i];
	}
	for (j = 0; j < 5; j++)
	{
		for (j = 0; j < 4; j++)
		{
			if (c[j] > c[j + 1])
			{
				temp = c[j];
				c[j] = c[j + 1];
				c[j + 1] = temp;
			}
		}
	}
	cout << "first smallest element is=" << c[0] << endl;
	cout << "Second smallest element is=" << c[1];

	return (0);
}