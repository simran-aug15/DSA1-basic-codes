#include<stdio.h>
#include<stdlib.h>
//Insertion at start of   doubly cicular LL
struct node
{
  int data;
  struct node*next;
  struct node*prev;  /* data */
};
 void traverselinkedlist(struct node*head)
{  struct node*ptr=head;
    do
    {
        printf("The values are: %d",ptr->data);
        ptr=ptr->next;
        printf("\n");
    }
    while(ptr!=NULL);

}
struct node* insertion(struct node*head,int data)
{
   struct node*ptr=(struct node*)malloc(sizeof(struct node));
   struct node*q=head->next;
   while(q->next!=NULL)
   {
    q=q->next;
   }
   ptr->data=data;
   ptr->next=head;
   ptr->prev=q->next;
   ptr=head;
   return ptr;





   


}
int main()
{
   struct node*head=(struct node*)malloc(sizeof(struct node));
    struct node*second=(struct node*)malloc(sizeof(struct node));
    struct node*third=(struct node*)malloc(sizeof(struct node));
    head->data=7;
    head->next=second;
    head->prev=NULL;
    second->data=73;
   second->next=third; 
   second->prev=head;

    third->data=70;
    third->next=NULL;
    third->prev=second;
    printf("original \n");
    traverselinkedlist(head);
    head=insertion(head,74);
    printf("THE new :");
        traverselinkedlist(head);

    
     
    
}




