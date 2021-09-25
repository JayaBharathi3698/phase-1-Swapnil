#include<stdio.h>
void main()
{
    int a[100];
    int n;
    int i;
    int max;
    int min;

    printf("enter size of array \n");
    scanf("%d",&n);
    printf("enter elements in array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=min=a[0];
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        max=a[i];
        else if(min>a[i])
        min=a[i];
    }
    printf("max in array is %d \nmin in array is %d ",max,min); 

}