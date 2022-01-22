#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
char s1[20], s2[20],*p,*q;
int flag=0;	 	 	 	 	 	 
cout<<"\n Enter a string : ";
cin>>s1;
strcpy(s2,s1);	 	 	 	 	 	 
strrev(s1);          
p=s1;
q=s2;
while(*p!='\0' && *q!='\0')
{
if(*p!=*q)
{
flag=1;
break;
}
p++;
q++;
}
if(flag==0)
cout << "\n String is palindrome.";
else
cout << "\n String is not palindrome.";
return 0;
}