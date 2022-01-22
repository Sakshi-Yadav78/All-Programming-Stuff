#include <iostream>
using namespace std;

class employee
{
protected:
	int employee_id;
	int employee_name;
	int salary;

public:
	void getdata()
	{
		cout << " Enter employee id: ";
		cin >> employee_id;

		cout << " Enter employee_name: ";
		cin >> employee_name;

		cout << " Enter salary: ";
		cin >> salary;
	}
	void showdata()
	{
		cout << " employee_id - " << employee_id << endl;
		cout << " employee_name - " << employee_name << endl;
		cout << " salary - " << salary << endl;
	}
};

class employee_information : public employee
{
private:
	int department;
	int salary;

public:
	void accept()
	{
		employee ::getdata();
		cout << " Enter department: ";
		cin >> department;

		cout << " Enter salary: ";
		cin >> salary;
	}

	void display()
	{
		employee ::showdata();
		cout << "Enter department: " << department << endl;
		cout << " Enter salary: " << salary << endl;
	}
};

int main()
{
	employee_information e1;
	e1.accept();
	e1.display();

	return 0;
}