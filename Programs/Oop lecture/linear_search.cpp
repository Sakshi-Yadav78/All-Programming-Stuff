#include <iostream>
using namespace std;
int main()
{
	int a[5], n, m, i;
	int elements;
	int *p;
	p = a;
	cout << "Enter how many elements";
	cin >> n;
	cout << endl << "Enter" << n << elements;
	for (i = 0; i < n; i++)
	{
		cin >> *(p + i);
	}
	cout << endl << "Enter element you want to search";
	cin >> m;
	for (i = 0; i < n; i++)
	{
		if (* p == m)
		{
			cout << " Position of element " << i + 1;
			break;
		}
		else
		{
			p++;
		}
		if (i == n)
			cout << "Element  not found";
	}
}
