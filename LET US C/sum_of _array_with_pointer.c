#include<stdio.h>

int sum(int a[][2] , int x , int y)
{
    int i;
    int j;
    int summation;
    summation=0;
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            summation+=*(*(a+i)+j);
            printf("%d\n",summation);
        }
    }
    return summation;
}

void main()
{
    int a[2][2]={1,8,6,7};
    int s;
    
    s=sum(a,2,2);
    printf("%d",s);
}