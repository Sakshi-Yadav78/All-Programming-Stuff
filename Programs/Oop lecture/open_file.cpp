#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	fstream f;
	f.open(" abc.txt ", ios::in);
	cout << " abc.txt file is opened "<< endl;
	return 0;
}