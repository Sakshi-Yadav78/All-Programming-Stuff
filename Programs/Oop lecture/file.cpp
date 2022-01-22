#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout;
	fout.open("abc.txt",ios::out);
	cout << " Writing into the file:" << endl;
	cout << " Welcome to Vidyalankar Poytechnic " << endl;
	cout << " Information Technology " << endl;
	cout << " Computer Engineering" << endl;
	cout << " Electronics & Telecommunication Engeering " << endl;
	fout.close();
	return 0;
}