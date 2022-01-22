#include <iostream>
using namespace std;

class publication
{
protected:
	float price;
	char title[4];

public:
	void getdata()
	{
		cout << "\n Enter publication title: ";
		cin >> title;
		cout << "\n Enter publication price: ";
		cin >> price;
	}
	void showdata(void)
	{
		cout << "\n Publication title is = " << title;
		"\n";
		cout << "\n Publication price is = " << price;
	}
};
class book : public publication
{
	char author[4];

public:
	void getdata1()
	{
		publication ::getdata();
		cout << "\n Enter Author name: ";
		cin >> author;
	}
	void showdata1()
	{
		publication::showdata();
		cout << "\n Author name is = " << author;
	}
};
class audio_cassette : public publication
{
	float playing_time;

public:
	void getdata2()
	{
		publication::getdata();
		cout << "\n Enter playing time of audio_cassette: ";
		cin >> playing_time;
	}
	void showdata2()
	{
		publication ::showdata();
		cout << "\n Playing time of audio_cassette is = " << playing_time;
	}
};
int main(void)
{
	book b;
	b.getdata1();
	b.showdata1();
	audio_cassette a;
	a.getdata2();
	a.showdata2();
	return 0;
}