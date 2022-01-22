#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream fin;
	char line [100];
	fin.open(" study.com ",ios::in);
	cout << " Contents of file are : \n";
	while (fin)
	{
		fin.getline(line,100);
		cout << line <<"\n";
	}
	fin.close();
	return 0;
}