#include <iostream>
using namespace std;

class number
{
	private:
		int x, y;
	public:
		void addition();
		void subtraction();
		void multiplication();
		void division();
};
    inline void number :: addition()
	{
		int a;
		int x;
		int y;
		a = x + y;
		cout << " Addition of x and y: " << a << endl;
	}
	inline void number ::subtraction()
	{
		int a;
		int x;
		int y;
		a = x - y;
		cout << " Subtraction of x and y: " << a << endl;
	}
	inline void number ::division()
	{
		int a;
		int x;
		int y;
		a = x / y;
		cout << " Division of x and y: " << a << endl;
	}
	inline void number ::multiplication()
	{
		int a;
		int x;
		int y;
		a = x * y;
		cout << " Multiplication of x and y: " << a << endl;
	}

	int main()
	{
		number n1;
		n1.addition();
		n1.subtraction();
		n1.division();
		n1.multiplication();

		return 0;
	}