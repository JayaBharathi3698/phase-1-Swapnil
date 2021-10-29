#include<stdio.h>
#include<stdlib.h>
 struct node 
 {
 	int data;
 	struct node*next;
 };
 struct node*head=NULL;
 struct node*tail=NULL;
 
 swap(struct node* a, struct node* b)
 {
 	int temp=a->data;
 	a->data=b->data;
 	b->data=temp;
 }
 
 struct node*getnode(int val)
 {
 	struct node*temp;
 	temp=(struct node*)malloc(sizeof(struct node));
 	temp->data=val;
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
 
 insertatpos(int v , int pos)
 {
 	struct node*ptr;
 	ptr=getnode(v);
 	struct node*run=head;
 	int i;
 	for(i=1;i<pos;i++)
 	{
 		run=run->next;
	}
	ptr->next=run->next;
	run->next=ptr;
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
 	insertend(2);
 	insertend(6);
 	insertbeg(4);
 	insertbeg(5);
 	insertend(3);
 	insertbeg(7);
 	insertatpos(9,2);
 	display();
 }
