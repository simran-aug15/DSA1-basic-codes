#include<stdio.h>
#include<stdlib.h>
//Insertion at start of single LL
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
struct node* insertionatfirst(struct node*head,int data)
{
   struct node*ptr=(struct node*)malloc(sizeof(struct node ));
   ptr->data=data;
   ptr->next=head;
   head=ptr;
   return ptr;
}
struct node* deletionatfirst(struct node*head)
{
   struct node*ptr=head;
   head=head->next;
   free(ptr);
   return head;
}
struct node* search(struct node*head,int value)
{
   struct node*p=head;
   int pos=1;
   while( p->next!=NULL)
   {
    if(p->data == value)
    {
        printf("Element %d found at pos %d",value,pos);
        return head;
    }
    p=p->next;
    pos++;
   }
  printf("Element %d  not found ",value);
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
    traverselinkedlist(head);
    printf("Element after insertion \n ");
    head=insertionatfirst(head,56);
    traverselinkedlist(head);
    head=deletionatfirst(head);
    printf("Element after deletion \n");
    traverselinkedlist(head);
    printf("original \n");
    traverselinkedlist(head);
    head=search(head,7);

     
    
}




