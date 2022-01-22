#include <iostream>
using namespace std;
int main()
{
	int a[10], n, i;
	int *p;
	p = a; //p=&a[0]
	cout << "Enter how many elements?";
	cin >> n;
	cout << endl << "Enter " << n << "elements";
	for (i = 0; i < n; i++)
	{
		cin >> *(p + i);
	}
	int max = a[0];
	for (i = 1; i < n; i++)
	{
		if (*p > max) //*p=35, M=20
		{
			max = *p; //max=35
			p++;
		}
		else
			p++;
	}
	cout << max;
}