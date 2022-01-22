#include <iostream>
using namespace std;

class num2;
class num1

{

private:
	int a;

public:
	void accept()

	{

		cout << "enter value of a:";

		cin >> a;
	}

	friend void swap(num1, num2);
};

class num2

{

private:
	int b;

public:
	void getdata()

	{

		cout << "enter value of b:";

		cin >> b;
	}

	friend void swap(num1, num2);
};

void swap(num1 n1, num2 n2)

{

	int temp;

	temp = n1.a;

	n1.a = n2.b;

	n2.b = temp;

	cout << "value of a and b after swaping:";

	cout << "value of a=" << n1.a << endl;

	cout << "value of b=" << n2.b << endl;
}

int main()

{

	num1 n1;

	num2 n2;

	n1.accept();

	n2.getdata();

	swap(n1, n2);

	return 0;
}