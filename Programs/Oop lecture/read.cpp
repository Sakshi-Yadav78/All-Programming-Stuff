#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin;
	char line [100];
	fin.open(" abc.txt ",ios::in);
	cout << " Contents of file are: " << endl;
	cout << " Welcome to Vidyalankar Polytechnic " << endl;
	cout << " Computer Engineering " << endl;
	cout << " Information Technology " << endl;
	cout << " Electronics And Telecommunication " << endl;
	while (fin)
	{
		fin.getline(line,100);
		cout << line << endl;
	}
	fin.close();
	return 0;
}