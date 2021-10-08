#include<stdio.h>
void main()
{
    int a[6][6];
    int i , j ;
    int minr , maxr , minc , maxc ;
    int put;
    put=1;
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            if(i<3)
            {
                a[i][j]=put++;
            }
            else
            {
                a[i][j]=--put;
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
    printf("\n");
    minr=0;
    maxr=5;
    minc=0;
    maxc=5;
    for(j=0;j<=3;j++)
    {
    for(i=minr;i<=maxr;i++)
    {
        printf("%d ",a[i][minc]);
    }
    minc++;
    for(i=minc;i<=maxc;i++)
    {
        printf("%d ",a[maxr][i]);
    }
    maxr--;
    for(i=maxr;i>=minr;i--)
    {
        printf("%d ",a[i][maxc]);
    }
    maxc--;
    for(i=maxc;i>=minc;i--)
    {
        printf("%d ",a[minr][i]);
    }
    minr++;
    }
}