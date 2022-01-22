#include <iostream>
using namespace std;

class college
{
protected:
	int college_code;

public:
	void getcollege()
	{
		cout << "enter college_code:";
		cin >> college_code;
	}
};
class student : public college
{
protected:
	int roll_no;
	char name[30];

public:
	void getstudent()
	{
		college ::getcollege();
		cout << "enter roll_no:";
		cin >> roll_no;
		cout << "enter name:";
		cin >> name;
	}
};
class result : public student
{
private:
	float grade;

public:
	void getresult()
	{
		student ::getstudent();
		cout << "Enter grade:";
		cin >> grade;
	}
};
int main()
{
	result r1;
	r1.getresult();
	return (0);
}