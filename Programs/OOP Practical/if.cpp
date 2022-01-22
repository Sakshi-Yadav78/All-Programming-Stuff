#include <iostream>
using namespace std;

int main()
{
	int a, b;
    
	cout << "Enter the values of a and b" <<" \n";
	cin >> a >> b;

	if (a > b)
	{
		cout << "A is greater and the value is:" << a;
	}

	else
	{
		cout << "B is greater and the value is:" << b;
	}
	
	return 0;
}
