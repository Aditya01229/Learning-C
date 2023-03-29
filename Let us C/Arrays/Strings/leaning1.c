# include <stdio.h>
# include <string.h>
int main( )
{
char source[ ] = "Sayon\0ara" ; // AVOID USING \0.
char target[ 20 ] ;
strcpy ( target, source ) ;
printf ( "source string = %s\n", source ) ;
printf ( "target string = %s\n", target ) ;
return 0 ;
}