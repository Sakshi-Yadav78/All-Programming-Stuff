#include <iostream>
#include <fstream>
using namespace std;
int main()
{
ifstream f;
f.open("abc.txt",ios::in);
std::cout<<"abc.txt file opened"<< std::endl;
char l[100];
while (f)
{
f.getline (l,100);
cout<<l<<"\n";
}
f.close();
std::cout<<"abc.txt  file closed"<< std::endl;
return 0;
}
