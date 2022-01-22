#include <iostream>

#include <cstring>

using namespace std;

class employee

{

public:
	string emp_id, emp_name;

	int emp_salary;

	int accept()

	{

		cout << "Enter employee id : ";

		cin >> emp_id;

		cout << "Enter employee name : ";

		cin >> emp_name;

		cout << "Enter salary : ";

		cin >> emp_salary;
	}

	int display()

	{

		cout << "Employee id : " << emp_id << endl;

		cout << "Employee name : " << emp_name << endl;

		cout << "Salary : " << emp_salary << endl;
	}
};

int main()

{

	int n;

	cout << "Enter number of employees : ";
	cin >> n;
	cout << "Enter employee id : ";
	cin >> n;
	cout << "Enter employees salary : ";
	cin >> n;

	return 0;
}