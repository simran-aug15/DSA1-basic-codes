#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};
int isempty(struct node* ptr)
{
    if(ptr==NULL)
    {
        return 1;
    }
    return 0;
}
int isfull(struct node* ptr)
{
    struct node* n=(struct node*)malloc(sizeof(struct node));
    if(n==NULL)
    {
        return 1;
    }
    return 0;
}

struct node* push(struct node* top,int val)
{
    if(isfull(top))
    {
        printf("Stack is overflowed  %d \n ",val);
        return top;
    }
    else
    {
    struct node* n=(struct node*)malloc (sizeof(struct node));
    n->data=val;
    n->next=top;
    top=n;
    return top;

    }
}
struct node* pop(struct node* top,intval)
{
    if(isempty(*top))
    {
        printf(Stack underflow);
        return -1;
    }
    else
    {
       struct node* n=*top;
       *top=(*op)>next;
       int x=n->data;
       free(n);
       return x;

    }
}
void linkedlisttraversal(struct node* ptr)
{
    while(ptr!=NULL)
    {
        printf("Element %d \n",ptr->data);
        ptr=ptr->next;
    }
}
int main()
{
    struct node* top=NULL;
    top=push(top,67);
    top=push(top,23);
    top=push(top,8);
    top=push(top,89);
    printf("stack elements are \n ");
    linkedlisttraversal(top);
    int element=pop(&top);
    printf("Pop element is %d \n",element);
    linkedlisttraversal(top);
}