#include<stdio.h>
#include<stdlib.h>
//Insertion at end of single LL
struct node
{
  int data;
  struct node*next;  /* data */
};
 void traverselinkedlist(struct node*ptr)
{
    while(ptr!=NULL)
    {
        printf("The values are: %d",ptr->data);
        ptr=ptr->next;
        printf("\n");
    }
}
struct node* insertionatend(struct node*head,int data)
{
   struct node*ptr=(struct node*)malloc(sizeof(struct node ));
   struct node*p=head;
   ptr->data=data;
   while(p->next!=NULL)
   {
    p=p->next;
   }
   ptr->next=NULL;
   p->next=ptr;
   return head;
}
int main()
{
   struct node*head=(struct node*)malloc(sizeof(struct node));
    struct node*second=(struct node*)malloc(sizeof(struct node));
    struct node*third=(struct node*)malloc(sizeof(struct node));
    head->data=7;
    head->next=second;
    second->data=73;
   second->next=third;

    third->data=70;
    third->next=NULL;
    printf("original \n");
    traverselinkedlist(head);
    head=insertionatend(head,56);
    printf("after insertion \n");
       traverselinkedlist(head);
     
    
}


