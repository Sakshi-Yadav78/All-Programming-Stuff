# include <iostream.h>

void main()

{  char s[40];          // declare character array

  char *p;               // declare pointer to string

  p = s;        //p=&s[0];        // initialize pointer to the base address of the string

  int length =0 ;

c	O	M	P	U	T	E	r	\0	 
cout<<"Enter string  : " ;

cin>> s;

 while ( *p != '\0')

{

      length++;

      p++;                                                     length=8

}

cout << "Length  of string = " << length;

}