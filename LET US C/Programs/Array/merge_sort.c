#include<stdio.h>
void main()
{

    int a[6]={1,3,5,7,9,11};
    int b[6]={2,4,6,8,10,12};
    int c[12];
    
    int i,j,k;
    
    for(i=0,j=0,k=0;i<6,j<6,k<12;k++)
    {
    	if(a[i]<b[j])
    	{
    		c[k]=a[i];
    		i++;	
		}
		else 
		if(b[j]<a[i])
		{
			c[k]=b[j];
			j++;	
		}
    	
    }
	printf("resultant array is\n");
	for(k=0;k<12;k++)
	{
		printf("%d ",c[k]);
	}   
}
