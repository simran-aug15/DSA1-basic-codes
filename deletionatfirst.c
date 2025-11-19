#include<stdio.h>
#include<stdlib.h>
//Deletion at Firstof single LL
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
struct node* deletionatfirst(struct node*head)
{
   struct node*ptr=head;
   head=head->next;
   free(ptr);
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
    head=deletionatfirst(head);
    printf("after insertion \n");
       traverselinkedlist(head);
     
    
}


