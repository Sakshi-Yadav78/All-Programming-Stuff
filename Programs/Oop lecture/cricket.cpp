#include <iostream>
using namespace std;

class cricketer
{
protected:
	char name[20];
	char country[25];

public:
	void getdata()
	{
		cout << "\n Enter name and country of cricketer: ";
		cin >> name >> country;
	}
	void display()
	{
		cout << "\n Name of cricketer = " << name;
		cout << "\n Country of cricketer = " << country;
	}
};
class batsman : virtual public cricketer
{
protected:
	int runs;

public:
	void getdata1(void)
	{
		cout << "\n Enter runs done by batsman: ";
		cin >> runs;
	}
};
class bowler : virtual public cricketer
{
protected:
	float bowling_speed;

public:
	void getdata2(void)
	{
		cout << "\n Enter bowling_speed of batsman: ";
		cin >> bowling_speed;
	}
};
class allrounder : public batsman, public bowler
{
public:
	void show(void)
	{
		cricketer::getdata();
		batsman::getdata1();
		bowler::getdata2();
	}
};
int main()
{
	allrounder a;
	a.show();
	return 0;
}