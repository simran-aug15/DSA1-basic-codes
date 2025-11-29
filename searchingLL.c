#include<stdio.h>
#include<stdlib.h>
//searching a value  of single LL
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
    second->data=12;
    second->next=third;

    third->data=70;
    third->next=NULL;
    printf("original \n");
    traverselinkedlist(head);
    head=search(head,12);

     
    
}


