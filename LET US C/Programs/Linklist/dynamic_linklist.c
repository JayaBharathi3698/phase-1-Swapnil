#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int x;
    struct node *next;

};

struct node *head=NULL;

void insert(int val)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->x=val;
    temp->next=head;
    head=temp;

}

void display()
{
    struct node *run;
    run=head;
    while(run!=NULL)
    {
        printf("\n%d\n",run->x);
        run=run->next;
    }
}

void main()
{
    char c;
    int i;
    while(c!='n')
    {
        printf("Enter value \n");
        scanf("%d",&i);
        insert(i);
        printf("\n Do you want to add more press y or n\n");
        scanf(" %c",&c);
    }
    display();
    
}
