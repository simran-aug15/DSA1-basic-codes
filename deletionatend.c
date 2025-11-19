#include<stdio.h>
#include<stdlib.h>
//Deletion at end of single LL
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
struct node* deletionatend(struct node*head)
{
   struct node*ptr=head;
   struct node*p=head->next;
   while(p->next!=NULL)
   {
    ptr=ptr->next;
    p=p->next;
   }
   ptr->next=p->next;
   free(p);
   return head;
}
int main()
{
   struct node*head=(struct node*)malloc(sizeof(struct node));
    struct node*second=(struct node*)malloc(sizeof(struct node));
    struct node*third=(struct node*)malloc(sizeof(struct node));
    head->data=7;
    head->next=second;

    third->data=70;
    third->next=NULL;
    printf("original \n");
    traverselinkedlist(head);
    head=deletionatend(head);
    printf("after insertion \n");
    traverselinkedlist(head);
     
    
}


