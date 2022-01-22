#include <iostream>
#include <fstream>
using namespace std;
int main()
{
ifstream fin;
fin.open("pqr.txt",ios::in);
char ch;
int c=0;
while(fin)
{
fin.get(ch);
if (ch==' ')
c++;
}
fin.close();
cout<<"count is="<<c;
}
