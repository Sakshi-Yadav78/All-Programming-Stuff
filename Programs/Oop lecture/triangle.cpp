#include<iostream>
 using namespace std;
class triangle // base class
{
protected:
	int h, base;

public:
	void getdata(void)
	{
		cout << "\n Enter height and base for triangle";
		cin >> h >> base;
	}
};
class rectangle // base class
{
protected:
	int l, b;

public:
	void getdata1(void)
	{
		cout << "\n Enter length and breadth for rectangle";
		cin >> l >> b;
	}
};
class area : public triangle, public rectangle // derived class
{
public:
	void calculate(void)
	{
		triangle ::getdata();
		rectangle ::getdata1();
		float a_tri, a_rect;
		a_tri = 0.5 * base * h;
		a_rect = l * b;
		cout << "\n Area of triangle is=" << a_tri;
		cout << "\n Area of rectangle is=" << a_rect;
	}
};
int main()
{
	area a;
	a.calculate();
}