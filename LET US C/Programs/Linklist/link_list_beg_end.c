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
 	insertbeg(2);
 	insertbeg(6);
 	insertend(4);
 	insertend(5);
 	insertbeg(3);
 	insertend(7);
 	insertbeg(9);
 	display();
 }
