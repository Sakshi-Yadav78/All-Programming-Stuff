#include <iostream>
using namespace std;

class employee
{
protected:
	int emp_id;
	char emp_name[3];

public:
	void accept()
	{
		cout << "enter emp_id:";
		cin >> emp_id;
		cout << "enter emp_name:";
		cin >> emp_name;
	}
	void display()
	{
		cout << "Emp_id=" << emp_id << endl;
		cout << "Emp_name=" << emp_name << endl;
	}
};

class worker : public employee
{
private:
	int O_salary;

public:
	void accept1()
	{
		employee ::accept();
		cout << "enter overtime salary:";
		cin >> O_salary;
	}

	void display1()
	{
		employee ::display();
		cout << "overtime salary=" << O_salary << endl;
	}
};

class manager : public employee
{
private:
	int add_allowance;

public:
	void accept2()
	{
		employee ::accept();
		cout << "enter add_allowance";
		cin >> add_allowance;
	}

	void display2()
	{
		employee ::display();
		cout << "add_allowance=" << add_allowance << endl;
	}
};

int main()
{
	worker w1;
	cout << "worker details:";
	w1.accept1();
	w1.display1();

	manager m1;
	cout << "manager details:";
	m1.accept2();
	m1.display2();

	return (0);
}