#include <iostream>
using namespace std;

class rectangle
{
private:
	float length, breadth;

public:
	float area;
	float perimeter;
	void accept();
	void display();
};
void rectangle::accept()
{
	cout << "Enter value of length and breadth: ";
	cin >> length >> breadth;
};
void rectangle::display()
{
	float area = length * breadth;
	cout << "Area of Rectangle: " << area << endl;

	float perimeter = 2 * length + breadth;
	cout << "Perimeter of Rectangle: " << perimeter << endl;
}

int main()
{
	rectangle r1;
	r1.accept();
	r1.display();
	return (0);
}