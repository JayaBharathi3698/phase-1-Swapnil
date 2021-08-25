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
