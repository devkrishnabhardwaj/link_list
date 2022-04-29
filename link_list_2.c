#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node* head=NULL;
void print(struct node* temp);
void append(struct node** temp,int x);
int main() 
{   
    // head=malloc(sizeof(struct node));
    // head->data=4;

    // head->next=malloc(sizeof(struct node));
    // head->next->data=9;

    // head->next->next=malloc(sizeof(struct node));
    // head->next->next->data=6;

    // head->next->next->next=NULL;
    append(&head,6);
    append(&head,3);
    append(&head,8);
    print(head);
}
void print(struct node* temp)
{
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
void append(struct node** temp,int x)
{  
    while(*temp!=NULL)
    { 
        temp=&(*temp)->next;
    }
    (*temp)=malloc(sizeof(struct node));
    (*temp)->data=x;
    (*temp)->next=NULL;
}
   