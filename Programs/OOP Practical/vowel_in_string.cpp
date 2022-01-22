# include <iostream>
using namespace std;
int main()
{  
char s[40];          // declare character array
char *p;               // declare pointer to string
p = s;        //P=&S[0];        // initialize pointer to the base address of the string
int count = 0;
cout<<" Enter string  : " ;
cin>> s;                                       
while ( *p != '\0')
{
if ( *p == 'a' || *p == 'e' || *p == 'i' || *p == 'o' || *p == 'u'||*p == 'A' || *p == 'E' ||*p == 'I' || *p == 'O' || *p == 'U')
count++;
}                                              //COUNT=5
p++;               
cout << " No. of vowels =" << count;
}                                                       