#include<stdio.h>
#include<stdlib.h>

void main()
{
  int a[6][6];
  int i,j,n;
  
  n=1;
  
  for(i=0;i<6;i++)
  {
    for(j=0;j<6;j++)
    {
      if(i<3)
      {
      a[i][j]=n++;
      }
      else
      {
        a[i][j]=--n;
      }
      
    }
  }   
  for(i=0;i<6;i++)
  {
    for(j=0;j<6;j++)
    {
      printf("%2d ",a[i][j]);
    }
    printf("\n");
  }
}
