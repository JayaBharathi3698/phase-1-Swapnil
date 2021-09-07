#include<stdio.h>
int main()
{
  int a[6] = { 6 , 4 , 5 ,3 ,  2, 8 } ;
  int i,temp,j;
  for(i=0;i<6;i++)
    {
     for(j=i;j<6;j++)
      {
       if( a [ i ] > a [ j ]) 
        { 
         temp = a [ j ];
         a [ j ] = a [ i ];
         a [ i ] = temp;
        }
     }
  }
  printf("sorted array is \n");
  
  for(i=0;i<6;i++)
  {
    printf(" %d ",a [ i ]);
  }
  return 0;
}
