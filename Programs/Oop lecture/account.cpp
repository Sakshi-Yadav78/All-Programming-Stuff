#include <iostream>
using namespace std;

class account
{
protected:
	char name[20];
	int acc_no;
public:
	void getdata(void)
	{
		cout << "\n Enter name and account no. of customer";
				cin >>
			name >> acc_no;
	}
};
class saving_acc : virtual public account
{
protected:
	float saving_bal;

public:
	void getdata1()
	{
		account ::getdata();
		cout << "\n Enter saving balance: ";
		cin >> saving_bal;
	}
};
class current_acc : virtual public account
{
protected:
	float current_bal;
public:
	void getdata2()
	{
		account ::getdata();
		cout << "\n Enter current balance: ";
		cin >> current_bal;
	}
};
class balance : public saving_acc, public current_acc
{
private:
	float total;
public:
	void show()
	{
		saving_acc ::getdata1();
		current_acc ::getdata2();
		total = saving_bal + current_bal;
		cout <<"total ="<< total;
	}
};

int main()
{
	balance b1;
	b1.show();
	return 0;
}