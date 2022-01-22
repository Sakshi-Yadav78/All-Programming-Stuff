#include <iostream>
using namespace std;

class test2; // prior declaration of class2

class test1

{

private:
	float m1, m2;

public:
	void setdata(float a, float b)

	{

		m1 = a;

		m2 = b;
	}

	friend void average(test1, test2); // function average is a friend of test1
};

class test2

{

private:
	float m3, m4;

public:
	void setdata(float a, float b)

	{

		m3 = a;

		m4 = b;
	}

	friend void average(test1, test2); // function average is a friend of test2
};

void average(test1 t1, test2 t2)

{

	float avg;

	avg = (t1.m1 + t1.m2 + t2.m3 + t2.m4) / 4;

	cout << avg;
}

int main()

{

	test1 t1;

	test2 t2;

	t1.setdata(34, 70);

	t2.setdata(40, 60);

	average(t1, t2); // friend fun. is invoked like a  normal  c++ function without any object
}