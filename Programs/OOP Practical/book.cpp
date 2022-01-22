#include <iostream>
using namespace std;
class book
{
private:
	char book_name[40], author[30];

public:
	float price;
	void accept()
	{
		cout << "enter book_name:";
		cin >> book_name;

		cout << "enter author:";
		cin >> author;
		
		cout << "enter price:";
		cin >> price;
	}
	void display()
	{
		cout << "Book name=" << book_name << endl;
		cout << "author name=" << author << endl;
		cout << "Book price=" << price << endl;
	}
};
int main()
{
	book b1, b2;

	b1.accept();
	b2.accept();

	if (b1.price > b2.price)
	{
		b1.display();
	}
	else
	{
		b2.display();
	}
	return 0;
}