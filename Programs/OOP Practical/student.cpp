#include <iostream>
using namespace std;
class student
{
private:
	char name[20], roll_no[10], department[10];
	int sem;

public:
	void input();
	void display();
};
void student::input()
{
	cout << "Enter Name:";
	cin >> name;
	cout << "Enter Roll_no:";
	cin >> roll_no;
	cout << "Enter Department:";
	cin >> department;
	cout << "Enter Sem:";
	cin >> sem;
}
void student::display()
{
	cout << "\nName:" << name;
	cout << "\nRoll_no.:" << roll_no;
	cout << "\nDepartment:" << department;
	cout << "\nSem:" << sem;
}
int main()
{
	student s;
	s.input();
	s.display();
}