#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct node
{
    char c;
    struct node *next;
    struct node *back;
};

void main()
{
    char s[12]="Hello World";
    int i;
    struct node *temp[12];
    struct node *head;
    struct node *head2;
    
    for(i=0;i<12;i++)
    {
        temp[i]=(struct node*)malloc(sizeof(struct node));
        if(i==0)
        {
            head=temp[i];
            temp[i]->c=s[i];
            temp[i]->back=NULL;
        }
        else
        if(i > 0 && i <11)
        {
            temp[i]->c=s[i];
            temp[i]->back=temp[i-1];
            temp[i-1]->next=temp[i];
        }
        else
        {
            temp[i]->c=s[i];
            temp[i]->back=temp[i-1];
            temp[i-1]->next=temp[i];
            temp[i]->next=NULL;
            head2=temp[i];

        }
        
    }
    struct node *run;
    
    run=head;
    while(run!=NULL)
    {
        printf("%c\n", run->c);
        run=run->next;
    }

}

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    
For printing values in reverse order follow the procedure below.
    
    run=head2;
    while(run!=NULL)
    {
        printf("%c\n");
        run=run->back;
    }

-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
