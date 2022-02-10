#include <iostream> 
using namespace std;

int main()
{
	unsigned int x = 3; //unsigned int means is a 32-bit datum that encodes a nonnegative integer in the range [0 to 4294967295]//
	while (x --> = 0) // --> it acts like a dot operator, try replacing it with '.'//
	{
		cout << x;  //no statement is given here //
	}
	return 0;
}