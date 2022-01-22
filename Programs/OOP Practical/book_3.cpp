#include <iostream>
#include <conio.h>
using namespace std;

class bookmark
{
	private:
	char b_name[10], author_name[10];
	float price;
	public:
    void getdata()
	{
		cout << " Enter the Book Name:"<<endl;
		cin >> b_name;
		cout << " Enter the Author Name:"<<endl;
		cin >> author_name;
		cout << " Enter the Price:"<<endl;
		cin >> price;
	}
	void showdata()
	{
		cout << " Book Name:" << b_name << endl;
		cout << " Price:" << price << endl;
		cout << " Author Name:" << author_name << endl;
	}
};
int main()
{
	int a;
	char book;
	book;
	book *a;
	return 0;
}