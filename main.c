#include<stdio.h>
#include<stdlib.h>
#include"header.h"
int main()
{
    struct node *head,*tail,*Head,*Tail;
    int choice=1;
    head=0;
    printf("****First linklist****\n");
    while(choice)
    {
        struct node *newnode;
        newnode=(struct node *)malloc(sizeof(struct node ));
        newnode->next=0;
        printf("Enter the data =");
        scanf("%d",&newnode->data);
        if(head==0)
        {
            head=newnode;
            tail=newnode;
        }
        else
        {
            tail->next=newnode;
            tail=newnode;
        }
        printf("Do you want to add more data (1/0)....... ");
        scanf("%d",&choice);
    }
    choice=1;
    Head=0;
    printf("****Second linklist****\n");
    while(choice)
    {
        struct node *newnode;
        newnode=(struct node *)malloc(sizeof(struct node ));
        newnode->next=0;
        printf("Enter the data =");
        scanf("%d",&newnode->data);
        if(Head==0)
        {
            Head=newnode;
            Tail=newnode;
        }
        else
        {
            Tail->next=newnode;
            Tail=newnode;
        }
        printf("Do you want to add more data (1/0)....... ");
        scanf("%d",&choice);
    }
    multiply(head,Head);
    addition(head,Head);
    subtraction(head,Head);
    division(head,Head);
}