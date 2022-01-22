#include <iostream>
using namespace std;
class product
{
private:
	int code;
	float price;
public:
	void getdata(void)
	{
		cout << "enter code";
		cin >> code;
		cout << "enter price";
		cin >> price;
	}
	void display(void)
	{
		cout <<"Product code ="<< code << endl;
		cout <<"product price =" << price;
	}
};

int main()
{
	product p1, p2;
	product *ptr; // create pointer of type product
	ptr = &p1; // ptr points to object p1
	ptr->getdata(); //p1.getdata()                            // Invoking getdata() using pointer to obejct
	ptr->display();
	ptr = &p2;
	ptr->getdata();
	ptr->display();
	return 0;
}