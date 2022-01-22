#include <iostream>
using namespace std;

class teacher
{

protected:
	int id;

public:
	void getdata()
	{
		cout << "enter the employee id";
		cin >> id;
	}
	void show()
	{

		cout << " id of employee is: " << id;
		" \n";
	}
};
class student
{
protected:
	int rollno;
	char name[15];

public:
	void getdata2()
	{
		cout << "enter the student name"; "\n";
		cin >> name;
		cout << "enter the student roll no" << endl;
		cin >> rollno;
	}
	void show2()
	{
		cout << " roll no is " << rollno;
		" \n ";
		cout << " name is: " << name;
		" \n ";
	}
};
class info : teacher, student
{

public:
	void getdata3()
	{
		teacher::getdata();
		student::getdata2();
	}
	void show3()
	{
		teacher::show();
		student::show2();
	}
};

int main()
{
	info e1;
	e1.getdata3();
	e1.show3();
	return 0;
}