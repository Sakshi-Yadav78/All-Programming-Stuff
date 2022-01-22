#include <iostream>
using namespace std;
int main()
{
	int i;

	int a[10], n, t;

	int *p, *q;

	p = &a[0]; // p points to first element of array

	cout <<"Enter how many elements ? ";

	cin >> n;

	cout << "Enter" << n << "elements";

	for (i = 0; i < n; i++)
	{
		cin >> *(p + i);
	}
	q = a + n - 1; // q points to the last element of array
	for (i = 0; i <= n; i++)
	{
		t = *p; //t=20
		*p = *q; //*p=09 *q=09
		*q = t; //*q=20
			p++;
		q--;
	}
	cout <<"\nThe reverse array is :"<< endl;
	for (i = 0; i < n; i++)
	{
		cout << endl << *(p + i);
	}
}