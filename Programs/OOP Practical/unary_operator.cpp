#include <iostream>
using namespace std;
class sample
{
	private:
	 int a, b;
	 public: 
	  sample(int x, int y)
	  {
		  a = x;
		  b = y;
	  }
	  void display()
	  {
		  cout << " Value of a: "<<a << endl;
		  cout << " Value of b: "<<b << endl;
	  }
	  void operator ++ ()
	  {
		  a++;
		  b++;
	  }
	  void operator -- ()
	  {
		  --a;
		  --b;
	  }

};
int main()
{
	sample sl(10, 20);
	sl.display();
	++sl;
	sl.display();
	--sl;
	sl.display();
	return 0;
}