#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node* f=NULL;
struct node* r=NULL;
void enqueue(int val)
{
    struct node* n=(struct node*)malloc(sizeof(struct node));
    if(n==NULL)
    {
        printf("Queue is full");
    }
    else
    {
      n->data=val;
      n->next=NULL;
      if(f==NULL)
      {
        f=r=n;
      }
      else
      {
        r->next=n;
        r=n;
      }
    }
}
int linkedlisttraversal(struct node* ptr)
{
    while(ptr!=NULL)
    {
        printf("Element %d \n ",ptr->data);
        ptr=ptr->next;
    }
}
int main()
{
    //linkedlisttraversal(f);
    enqueue(34);
    enqueue(45);
    enqueue(78);
    linkedlisttraversal(f);

}