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
struct node* search(struct node*head,int value)
{
   struct node*p=head; 
   int pos=1;
   while(p->next!=head)
   {
    if(p->data==value)
    {
        printf("Element %d is found at pos %d",value,pos);
        return head;
    }
     p=p->next;
     pos++;
   }
   printf("Element %d not found",value);
    


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
    head=search(head,73);
    
     
    
}




