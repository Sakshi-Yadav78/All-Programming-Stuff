# include <iostream>
using namespace std;
int cmp(char *,char *);      // function prototype                           COM=-1, 0, 1
int main()
{

  char s1[40], s2[40];

  cout<<"Enter string1  : " ;                                     

  cin>> s1;

  cout<<"Enter string2  : ";

  cin>>s2;

  int i=cmp(s1 , s2);

  if( i <0)

  cout<<"string 1 is less than string 2";

  else if (i>0)

  cout<<"string 1 is greater than string 2";

  else

  cout<<"eqaual";

 }

int  cmp (char *s1,char *s2)

{

   while(*s1 == *s2)

  {

     if(*s1=='\0')

          return(0);

    s1++;

    s2++;

  }

  return(*s1- *s2);

 }