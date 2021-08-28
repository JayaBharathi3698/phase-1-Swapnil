#include<stdio.h>

void main()
{
	int a[6]={6 , 4 , 5 , 3 , 2 , 8 };
	int i,temp,count;
	count=0;
	printf("before sorting\n");
	for(i=0;i<6;i++)
	{
		printf(" %d ",a[i]);
	}
	
	while(count==0)
	{
		count=1;
		
		for(i=0;i<5;i++)
		{
			if(a[i]>a[i+1])
			{
				temp=a[i+1];
				a[i+1]=a[i];
				a[i]=temp;
				count=0;
			}
		
		}
	}
	printf("\nafter sorting\n");
	
	for(i=0;i<6;i++)
	{
		printf(" %d ",a[i]);
	}
	
}
