#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
	
};

struct node *head=NULL;

struct node*getnode(int v)
{
	struct node*temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=v;
	return temp;
	
}

insertbeg(int v)
{
	struct node*ptr;
	ptr=getnode(v);
	ptr->next=head;
	head=ptr;
}

insertend(int v)
{
	struct node*ptr;
	ptr=getnode(v);
	if(head==NULL)
	{
		ptr->next=head;
		head=ptr;
	}
	else
	{
		struct node*run=head;
		while(run->next!=NULL)
		{
			run=run->next;
		}
		run->next=ptr;
		ptr->next=NULL;
	}
}

insertatpos(int v, int pos)
{
	struct node*ptr;
	ptr=getnode(v);
	if(pos==0)
	{
		ptr->next=head;
		head=ptr;
	}
	else
	{
		struct node*run=head;
		int i;
		for(i=1;i<pos-1;i++)
		{
			run=run->next;
		}
		ptr->next=run->next;
		run->next=ptr;
	}
}
struct node*getminadd( struct node*a )
{
	struct node*x=a;
	while(a!=NULL)
	{
		if( x->data > a->data)
		x=a;
		a=a->next;
	}
	return x;
}

selectionsort()
{
	struct node*temp=head;
	while(temp->next!=NULL)
	{
		struct node*run;
		run=getminadd(temp);
		swap(run,temp);
		temp=temp->next;
	}
}

/*bubblesort()
{
	int l;
	struct node*prev=head;
	struct node*curr=prev->next;
	while(l!=1)
	{
		prev=head;
		curr=prev->next;
		l=1;
		while(curr!=NULL)
		{
			if(prev->data > curr->data)
			{
			
			    swap(prev,curr);
			    l=0;
		    }
			prev=prev->next;
			curr=curr->next;
		}
	}
}*/

swap(struct node*a, struct node*b)
{
	int temp=a->data;
	a->data=b->data;
	b->data=temp;
	
}


display()
{
	struct node*run=head;
	while(run!=NULL)
	{
		printf("%d ",run->data);
		run=run->next;
	}
}

void main()
{
	insertbeg(1);
	insertbeg(2);
	insertbeg(3);
	insertbeg(4);
	insertbeg(5);
	insertend(9);
	insertend(7);
	insertatpos(6,5);
//	bubblesort();
    selectionsort();
	display();
}
