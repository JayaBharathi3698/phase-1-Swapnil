#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head;
    struct node *temp;
    struct node *temp1;
    struct node *temp2;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data=10;
    head = temp;
    
    
    temp1 = (struct node*)malloc(sizeof(struct node));
    temp1->data=11;
    temp->next=temp1;
    
    
	temp2= (struct node*)malloc(sizeof(struct node));
    temp2->data=20;
    temp1->next=temp2;
    temp2->next=NULL;
    
    struct node *run;
    run=temp;
	while(run!=NULL)
	{
		printf("%d\n",run->data);
		run=run->next;
	}
return 0 ;
}

