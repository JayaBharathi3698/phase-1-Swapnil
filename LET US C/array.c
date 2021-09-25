#include<stdio.h>
void main()
{
   int a[4];
   int i;
   printf("enter 4 elements in array\n");
   for(i=0;i<4;i++)
   {
        scanf(" %d ",&a[i]);
   }
   printf("elements present in array are\n");
   for(i=0;i<4;i++)
   {
        printf(" %d ",a[i]);
   }
}
