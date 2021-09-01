Q1 :- WAP to enter array from user and print sum of elements upto limit set by user.
  
  #include<stdio.h>
void main()
{
  	int a[6];
  	int i;
	  int strt;
  	int end;
  	int temp;
  	temp =0;
  	printf("enter 6 elements\n");
  	for(i=0;i<6;i++)
  	{
  		  scanf("%d",&a[i]);
  	}
	
  	printf(" enter starting and ending index\n");
  	scanf("%d  %d",&strt,&end);
	
	  for(i=strt;i<=end;i++)
	  {
		    temp=temp+a[i];
	  }
	
	  printf("sum of number is = %d",temp);
}

----------------------------------------------------------

Q2 :- WAP to merge 2 given array by using 3rd array.
	
#include<stdio.h>
void main()
{

    int a[6]={1,3,5,7,9,11};
    int b[6]={2,4,6,8,10,12};
    int c[12];
    
    int i,j,k;
    
    for(i=0,j=0,k=0;i<6,j<6,k<12;)
    {
    	if(a[i]<b[j])
    	{
    		c[k]=a[i];
    		i++;
    		k++;
		}
		else 
		if(b[j]<a[i])
		{
			c[k]=b[j];
			j++;
			k++;
			
		}
    	
    }
	printf("resultant array is ");
	for(k=0;k<12;k++)
	{
		printf("%d\n",c[k]);
	}
    
}
