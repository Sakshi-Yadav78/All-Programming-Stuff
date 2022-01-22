#include <iostream>
#include <fstream>
using namespace std;
int main()
{
ifstream fin;
ofstream fout;
fout.open("pqr.txt",ios::out);
fin.open("abc.txt",ios::in);
char l[100];
while(fin)
{
fin.getline(l,100);
fout<<l<<endl;
}
fin.close();
fout.close();
}
