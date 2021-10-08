#include<stdio.h>
#include<malloc.h>
void main()
{
    int i,n,s=0;
    int *a;
    printf("enter size of array\n");
    scanf("%d",&n);
    a=(int *)malloc(n*sizeof(int));
    printf("enter elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);

    }
    for(i=0;i<n;i++)
    {
        s=s + *(a+i);
    }
    printf("sum of numbers is =%d",s);
} 
