#include<stdio.h>
#include<stdlib.h>
struct node {
 int data;
 struct node* next;
};
void main()
 {
  struct node* head;
  head=NULL;
  printf("\n No. of Nodes in Linked List:=%d",count(head));
  append(&head,1);
  append(&head,2);
  append(&head,4);
  append(&head,6);
  display(head);
 printf("\n\n\n No. of Nodes in Linked List:=%d",count(head));
  printf("\n");
  beginadd(&head,8000);
  beginadd(&head,5000);
  beginadd(&head,2000);
  display(head);
  appendafter(head,3,50);
  //appendafter(head,2,10);
  appendafter(head,1,55);
  display(head);
  delete(&head,55);
  display(head);
  printf("\n\n\n No. of Nodes in Linked List:=%d",count(head));
  printf("\n");

  }
 beginadd(struct node** q,int num)
  {
   struct node* temp;
   temp=malloc(sizeof(struct node));
   temp->data=num;
   temp->next=*q;
   *q=temp;
  }
 int append(struct node** tail,int num)
  {
   struct node* temp;
   temp=*tail;
   if (*tail==NULL)
    {
   *tail=malloc(sizeof(struct node));
     temp=*tail;
     }
     else
     {
      while(temp->next != NULL)
       temp=temp->next;
       
      temp->next=malloc(sizeof(struct node));
      temp=temp->next;
     }
   temp->data=num;
   temp->next=NULL;
  }
display(struct node* tail)
 {
  printf("\n");
  while(tail !=NULL)
   {
    printf("%d\t",tail->data);
    tail=tail->next;
     }
  } 
 
 count(struct node* tail)
 {
  int c=0;
  while(tail!=NULL)
   {
    tail=tail->next;
    c++;
   }
   return c;
 }
 appendafter(struct node* q,int loc,int num)
  {
   struct node* temp;
   int i;
   for(i=0;i<loc;i++)
    { q=q->next;
    if(q==NULL)
      {
       printf("\n There are less than %d Elements",loc);
       return;
   }
    }
    temp=malloc(sizeof(struct node));
    temp->data=num;
    temp->next=q->next;
    q->next=temp;
  }
  delete(struct node** q,int num)
  {
   struct node* old, *temp;
   temp=*q;
   
   while(temp!=NULL)
    {
     if(temp->data==num)
      {
       if(temp==*q)
        {
     *q=temp->next;
         free(temp);
     return;
   }
   else
   {
    old->next=temp->next;
    free(temp);
    return;
   }
    }
    else
      {
    old=temp;
    temp=temp->next;
      }
  }
      printf("\n %d NUMBER not found\n",num);
}