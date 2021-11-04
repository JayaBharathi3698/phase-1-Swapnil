#include<stdio.h>

f( int n ) 
{
  if( n == 0 )
    return ;
  
  f( n - 1 ) ;
  printf( "%d " , n ) ;
}

void main()
{
  int a ;
  a = 5 ;
  f( a ) ;
}
