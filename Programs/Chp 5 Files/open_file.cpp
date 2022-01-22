#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	fstream f;
	f.open(" study.com ",ios::in);
	cout << " study.com file opened ";
	return 0;
}