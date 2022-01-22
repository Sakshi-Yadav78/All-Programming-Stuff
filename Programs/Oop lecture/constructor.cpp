#include <iostream>
using namespace std;
class test
{
	public:
	test()
	{
		int n;
		n = 10;
		cout << n << " Primary Object ";
	}
	~ test()
	{
		cout << " Object destroyed" << endl;
	}
};
int main ()
{
	test ob;
	return 0;
}