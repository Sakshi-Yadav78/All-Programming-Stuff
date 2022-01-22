#include <iostream>
using namespace std;
class sample
{
	private:
	  int a,b;
 public:
	  sample (int x,int y)
	  {
		  a = x;
		  b = y;
	  }
	  void display()
	  {
		  cout << "a =" << a;
		  cout << "b =" << b;
	  }
	  void getdata()
	  {
		  a = -a;
		  b = -b;
	  };
};
int main ()
{
	sample s (3 , 4);
	cout << "Before negation";
	s.display();
	cout << "After negation";
	// -s operator fun is invoked
	s.display();
	return 0;
}