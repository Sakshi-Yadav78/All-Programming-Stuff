#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
	int rollno;
	string name;
	string course;

public:
	Student(int r, string n, string c = "Computer engg")
	{
		rollno = r;
		name = n;
		course = c;
	}
	void display()
	{
		cout << "Roll.No:" << rollno << endl;
		cout << "Name:" << name << endl;
		cout << "Course:" << course << endl;
	}
};
int main()
{
	Student s1(102, "Deepali");
	s1.display();
	cout << "" << endl;
	Student s2(103, "Rohit");
	s2.display();
	return 0;
}