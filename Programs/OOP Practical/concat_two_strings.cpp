# include <iostream>
using namespace std;

void cat (char *,char *);     // function prototype	 	 
int main()
{   char s1[40], s2[40], *p, *q;
p=&s1[0]; q=&s2[0];
  cout<<"Enter string1  : " ;
  cin>> s1;
  cout<<"Enter string2  : ";	 	 	 	 	 
  cin>>s2;
  cat ( s1,s2);
 cout << "After concatenation  : "<< s1 <<endl;
 }
void  cat ( char *p , char * q)
{
      while ( *p != '\0')
      p++;                 // take the pointer s1 at the end of first string.
      while (*q != '\0')        
      {  *p = *q;           // copy s2 char by char to s1
	    p++;
        q++;
      }
      *p = '\0';               // after concatenation append null

}