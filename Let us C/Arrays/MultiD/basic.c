/* Demo: 2-D array is an array of arrays */
# include <stdio.h>
int main( )
{
    int a[] = {1,2,3,4,5,6,7};
int s[ 4 ][ 2 ] = {
{ 1234, 56 },
{ 1212, 33 },
{ 1434, 80 },
{ 1312, 78 }
 } ;
int i ;
for ( i = 0 ; i <= 3 ; i++ )
printf ( "Address of %d th 1-D array = %d\n", i, *(s[i] + 1) ) ;
i--;
printf ( "\nAddress of %d th 1-D array = %d\n", i, s[i][0]);
printf("\n");
printf ( "Address of %d th 1-D array = %d\n", i, *s[i]);
printf("\n");
printf ( "Address of %d th 1-D array = %u\n", i, s[i]);
printf("\n");
printf ( "Address of %d th 1-D array = %u\n", i, (s[i]+ 1));
printf("\n");
return 0 ;
}
