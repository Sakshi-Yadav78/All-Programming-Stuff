#include <iostream>
using namespace std;
int main()
{
	int a[5], n, j, i, t;
	int elements;
	int *p;
	p = &a[0];
	cout << "Enter how many elements";
	cin >> n;
	cout << endl
		 << "Enter" << n << elements;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < elements; j++)
		{
			if (*(p + j) > *(p + j + 1) )
			{
				t = * (p + j);
				*(p + j) = *(p + j + 1);
                * (p + j + 1) = t;
			}
		}
	}
	cout << "\n" " The sorted array is: " << endl;
	for (i = 0; i < n; i++)
	{
		cout << *(p + i);
	}	
}	