#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
    char c;
    struct node *next;
    struct node *prev;
};

void main()
{
    char s[11]="HelloWorld";
    struct node *temp1;
    struct node *head;
    struct node *head2;
    struct node *temp2;
    struct node *temp3;
    struct node *temp4;
    struct node *temp5;
    struct node *temp6;
    struct node *temp7;
    struct node *temp8;
    struct node *temp9;
    struct node *temp10;
    struct node *temp11;
    temp1=(struct node*)malloc(sizeof(struct node));
    head=temp1;
    temp2=(struct node*)malloc(sizeof(struct node));
    temp3=(struct node*)malloc(sizeof(struct node));
    temp4=(struct node*)malloc(sizeof(struct node));
    temp5=(struct node*)malloc(sizeof(struct node));
    temp6=(struct node*)malloc(sizeof(struct node));
    temp7=(struct node*)malloc(sizeof(struct node));
    temp8=(struct node*)malloc(sizeof(struct node));
    temp9=(struct node*)malloc(sizeof(struct node));
    temp10=(struct node*)malloc(sizeof(struct node));

    temp1->c=s[0];
    temp1->prev=NULL;
    

    temp2->c=s[1];
    temp2->prev=temp1;
    temp1->next=temp2;
    

    temp3->c=s[2];
    temp3->prev=temp2;
    temp2->next=temp3;
    

    temp4->c=s[3];
    temp4->prev=temp3;
    temp3->next=temp4;
    
    
    temp5->c=s[4];
    temp5->prev=temp4;
    temp4->next=temp5;
    
    
    temp6->c=s[5];
    temp6->prev=temp5;
    temp5->next=temp6;
    
    
    temp7->c=s[6];
    temp7->prev=temp6;
    temp6->next=temp7;
    
    
    temp8->c=s[7];
    temp8->prev=temp7;
    temp7->next=temp8;
    
    
    temp9->c=s[8];
    temp9->prev=temp8;
    temp8->next=temp9;
    
    
    temp10->c=s[9];
    temp10->prev=temp9;
    temp9->next=temp10;
    
    
    
    temp10->next=NULL;

    head2=temp10;

    struct node *run;
    
    run=head;
    while(run!=NULL)
    {
        printf("%c\n", run->c);
        run=run->next;
        
        
    }
   

}