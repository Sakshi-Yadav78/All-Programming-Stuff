#include <iostream>
using namespace std;
class book
{
	char author_name[20];
	char title[20];
	char publication[20];
	float price;

public:
	void Accept();
	void Display();
};
void book::Accept()
{
	cout << "\n Enter books title, author_name, publication and price \n:";
	cin >> title >> author_name >> publication >> price;
}
void book::Display()
{
	cout << "\n title << << author_name << << publication << << price << <<\n";
}
int main()
{
	book b, *p;
	p = &b;
	p->Accept();
	cout <<"title \t author_name \t publication \t price\n";
	p->Display();
	return 0;
}