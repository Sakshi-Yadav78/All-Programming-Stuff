#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	fstream f;
	f.open(" study.com ",ios::in);
	cout << " study.com file opened ";
	f.close();
	cout << " study.com file closed ";
	return 0;
}