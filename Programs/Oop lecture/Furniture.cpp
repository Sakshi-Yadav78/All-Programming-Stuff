#include <iostream>
using namespace std;

class furniture
{
	protected:
		int length;
		int width;
		int height;
	public: 
	void getdata()
	{
		cout << " Enter length: ";
		cin >> length;

		cout << " Enter width: ";
		cin >> width;

		cout << " Enter height: ";
		cin >> height;
	}
	void showdata()
	{
		cout << " length - " <<length <<endl;
		cout << " width - " << width << endl;
		cout << " height - " << height << endl;
	}
};

class bookshelf : public furniture
{
	private: int no_of_shelf;
	public: 
	void accept()
	{
		furniture :: getdata();
		cout << " Enter no_of_shelf: ";
		cin >> no_of_shelf;
	}

	void display()
	{
		furniture :: showdata();
        cout << "Enter no_of_shelf: " << no_of_shelf << endl;
	}
};

int main()
{
	bookshelf b1;
	b1.accept();
	b1.display();

	return 0;
}