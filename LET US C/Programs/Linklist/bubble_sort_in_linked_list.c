#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node *head=NULL;

void swap(struct node *curr, struct node *prev)
{
	int temp;
	temp=curr->data;
	curr->data=prev->data;
	prev->data = temp;
}

void sort()
{
	struct node *prev=head;
	struct node *curr;
	curr=prev->next;
	
	int c=0;
	

    while(c==0)
{   prev=head;
    curr=prev->next;
	
		while(curr!=NULL)
		{
			c=1;
			
			if(prev->data>curr->data)
			{
				swap(curr, prev);
				c=0;
			}
			
			curr=curr->next;
			prev=prev->next;
			
		}
    }
}

struct node *getnode(int v)
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=v;
	return temp;
}

struct node *insertbeg( int val)
{
	struct node *ptr;
	ptr=getnode(val);
	ptr->next=head;
	head=ptr;
}

void display()
{
	struct node *run;
	run=head;
	while(run!=NULL)
	{
		printf("%d ",run->data);
	
	run=run->next;

}
	
}
void main()
{
	insertbeg(4);
	insertbeg(5);
	insertbeg(1);
	insertbeg(2);
	insertbeg(3);
	sort();
	display();
}
