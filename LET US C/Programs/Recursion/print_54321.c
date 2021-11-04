#include<stdio.h>

f( int n )
{
   if( n== 0 )
     return;
  
  printf( "%d " , n);
  f( n - 1 );
}

void main()
{
  int k;
  k = 5 ;
  f( k );
}
