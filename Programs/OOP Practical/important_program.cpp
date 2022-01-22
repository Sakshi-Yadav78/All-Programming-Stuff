#include <iostream>
using namespace std;
class distance
{
	private:
	 int feet, inches;
	 public: 
	  distance()
	  {
		  feet = 0;
		  inches = 0;
	  }
	  distance(int f, int i)
	  {
		  feet = f;
		  inches = i;
	  }
	friend ostream &operator<<(ostream &output, const distance &d1);
    {
	output << "F:"<<d1.feet <<"I:"<<d1.inches;
	return output;
    }
friend istream &operator<<(istream &output, const distance &d1);
 {
	output << "F:"<<d1.feet <<"I:"<<d1.inches;
	return input;
 }
};
int main()
{
	distance d1(), d2(), d3();
	d1.set_distance();
	d2.set_distance();
	d3.add(d1, d2);
	d3.get_distance();
	cout << " Enter value of object: ";
	cin >> d3;

	cout<< "First distance:" << d1 <<endl;
    cout<< "Second distance:" << d2 <<endl;
    cout<< "Third distance:" << d3 <<endl;
	return 0;
}