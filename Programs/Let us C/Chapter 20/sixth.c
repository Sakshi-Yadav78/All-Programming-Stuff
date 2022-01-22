# include <stdio.h>
 int main( )
{
FILE *fp ;
char names[ 20 ] ;
int i ;
fp = fopen ( "students.dat", "wb" ) ;
for ( i = 0 ; i <= 10 ; i++ )
{
puts ( "\nEnter name: " ) ;
gets ( name ) ;
fwrite ( name, size of ( name ), 1, fp ) ;
}
close ( fp ) ;
return 0 ;
}
//Error in this program alot