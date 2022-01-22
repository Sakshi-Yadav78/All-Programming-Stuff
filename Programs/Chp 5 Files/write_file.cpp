#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream fout;
	fout.open(" study.com ",ios::out);
	cout << " Writing into the file:\n ";
	fout << " Welcome to Vidyalankar Polytechnic College\n ";
	fout << " Computer Engineering\n ";
	fout << " Information Technology\n ";
	fout << " Electronics & Telecommunication Engineering \n ";
	fout.close();
	return 0;
}