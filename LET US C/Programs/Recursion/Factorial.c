#include<stdio.h>

f( int n )
{
  
  if( n == 1 )
  return ;
  int a ;
  int b ;
  
  b = f( n - 1 ) ;
  a = n * b ;
  
  return a ;
}

void main()
{

  int x ;
  int y ;
  scanf( " %d" , &x ) ;
  y = f( x ) ;
  printf( "\n%d " , y );
}
