# include <iostream>
using namespace std;
void copy(char *,char *);  // function prototype
int main()
{   
char s[40], t[40], *p, *q;
p=&s[0]; q=&t[0];
  cout<<"Enter source string ";	 	 	 	 
  cin >> s;
  cout<<"Enter target string";
  cin >> t;
  copy ( t , s);	 	 	 	 
  cout<<"\nAfter copy Target string is:";
  cout << t;
 }
void copy(char * p, char *q)
{
  while(*p != '\0')
  {
   *q=*p;
    q++;
    p++;
  }
}      