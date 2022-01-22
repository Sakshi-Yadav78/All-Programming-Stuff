#include <iostream>
using namespace std;

class student
{
protected:
	int roll_no;
	char name[30];

public:
	void getdata()
	{
		cout << "Enter name , roll_no:";
		cin >> name >> roll_no;
	}
	void showdata()
	{
		cout << "\n roll_no= " << roll_no << endl;
		cout << "\n Name = " << name << endl;
	}
};
class test : public student
{
protected:
	float ptt1, ptt2;

public:
	void input()
	{
		student ::getdata();
		cout << "\n Enter ptt1, ptt2 marks";
		cin >> ptt1 >> ptt2;
	}
	void output()
	{
		student ::showdata();
		cout << "\n ptt1 marks= " << ptt1 << endl;
		cout << "\n ptt2 marks= " << ptt2 << endl;
	}
};
class result : public test
{
private:
	float total, per;

public:
	void accept()
	{
		test ::input();
	}
	void display()
	{
		test ::output();
		total = ptt1 + ptt2;
		cout << "total of ptt1 and ptt2=" << total << endl;
		per = total / 100;
		cout << "per=" << per;
	}
};
int main()
{
	result r1;
	r1.accept();
	r1.display();
	return 0;
}
