#include <iostream>
#include <conio.h>
using namespace std;

class number
{
private:
	int x, y;

public:
	number(int a, int b)
	{
		x = a;
		y = b;
	}
	void display()
	{
		int add = x + y;
		cout << "Addition of x & y=" << add << endl;

		int sub = x - y;
		cout << "Subtraction of x & y=" << sub << endl;

		int mul = x * y;
		cout << "Multiplication of x & y=" << mul << endl;

		float div = x / y;
		cout << "Division of x & y=" << div << endl;
	}

	~number()
	{
		cout << "Destructor is called";
	}
};

int main()
{
	number n1(10, 5);
	n1.display();
}