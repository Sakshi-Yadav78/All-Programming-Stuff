#include <iostream> // cout, cin
#include <conio.h>
using namespace std;

int main()
{
	int a, b, c;

	cout << "Enter value of a and b";
	cin >> a;
	cin>>b;      //cin>>a>>b;

	c = a + b;

	cout << "Addition of a and b=" << c << endl;
	getch();
}