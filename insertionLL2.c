#include<stdio.h>
#include<stdlib.h>
//Insertion at index of single LL
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
struct node* insertionatindex(struct node*head,int data,int index)
{
   struct node*ptr=(struct node*)malloc(sizeof(struct node ));
   struct node*p=head;
   int i=0;
   while( i<index-1 )
   {
    p=p->next;
    i++;
   }
   ptr->data=data;
   ptr->next=p->next;
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
    head=insertionatindex(head,56,1);
    printf("after insertion \n");
       traverselinkedlist(head);
     
    
}




