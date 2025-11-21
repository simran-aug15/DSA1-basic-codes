//Insertion in stack
#include<stdio.h>
#include<stdlib.h>
struct stack {
    int size;
    int top;
    int* arr;
};
int isfull(struct stack* ptr)
{
   if(ptr->top==ptr->size-1)
   {
    return 1;

   }
   else{
    return 0;
   }
}
void push(struct stack* ptr,int val)
{
    if(isfull(ptr))
    {
        printf("stack is full \n",val);
    }
    else
    {
    ptr->top++;
    ptr->arr[ptr->top]=val;
    printf("%d is value added in stack \n",val);
    }
}
int main()
{
    struct stack* sp=(struct stack*)malloc(sizeof(struct stack));
    sp->size=5;
    sp->top=-1;
    sp->arr=(int*)malloc(sp->size* sizeof(int));
    printf("Stack is created \n");
    printf("%d \n",isfull(sp));
    push(sp,6);
    push(sp,7);
    push(sp,71);
    push(sp,10);
    push(sp,12);
    push(sp,56);
    
    printf("%d \n",isfull(sp));


}