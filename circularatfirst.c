#include<stdio.h>
#include<stdlib.h>
//Insertion at start of  cicular LL
struct node
{
  int data;
  struct node*next;  /* data */
};
 void traverselinkedlist(struct node*head)
{  struct node*ptr=head;
    do
    {
        printf("The values are: %d",ptr->data);
        ptr=ptr->next;
        printf("\n");
    }
    while(ptr!=head);

}
struct node* insertionatfirst(struct node*head,int data)
{
   struct node*ptr=(struct node*)malloc(sizeof(struct node ));
   struct node*p=head->next;
   ptr->data=data;
   while(p->next!=head)
   {
    p=p->next;
   }
   p->next=ptr;
   ptr->next=head;
    

   return ptr;
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
    third->next=head;
    printf("original \n");
    traverselinkedlist(head);
    head=insertionatfirst(head,56);
    printf("after insertion \n");
       traverselinkedlist(head);
     
    
}




