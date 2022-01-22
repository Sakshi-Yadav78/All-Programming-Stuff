# include <iostream>
using namespace std;
int main()
{  
char s[40];          // declare character array
char *p;               // declare pointer to string
p = s;                    // initialize pointer to the base address of the string
cout<<" Enter string  : " ;
cin>> s;
char ch;
int pos = 0;                            //pos=3
cout << "Enter character u want to search : ";
cin >> ch;                                      //B while ( *p != ‘\0’)
{
 if ( *p == ch)
{
 cout << " Character found at position: "<< pos +1;
}
pos ++;                                    
p++;
}                  
if ( *p == '\0')
cout << " Character not found ";
}      