#include <iostream>
using namespace std;
class employee
{
private:
	int basic, TA, DA, HRA;
	/*
TA: Travelling Allowance
DA: Daily Allowance
HRA: House Rental Allowance
*/
public:
	employee(int a, int b, int c = 20000, int d = 2000)
	{
		basic = a;
		TA = b;
		DA = c;
		HRA = d;
	};
	void display()
	{
		int gs; // Gross Salary
		gs = basic + TA + DA + HRA;
		cout << " Gross Salary " << gs << endl;
	}
};
int main()
{
	employee e1(25000, 1200);
	e1.display();
	return 0;
}