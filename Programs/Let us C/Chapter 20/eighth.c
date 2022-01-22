# include <fcntl.h>
# include <stdio.h>
int main( )
{
int fp ;
fp = open ( "pr22.c" , "r" ) ;
if ( fp == -1 )
puts ( "cannot open file\n" ) ;
else
close ( fp ) ;
return 0 ;
}
//No error