//deletion in stack
#include<stdio.h>
#include<stdlib.h>
struct stack {
    int size;
    int top;
    int* arr;
};
int isempty(struct stack* ptr)
{
   if(ptr->top==-1)
   {
    return 1;

   }
   else
   {
    return 0;
   }
}
int pop(struct stack* ptr)
{
    if(isempty(ptr))
    {
        printf("stack is empty \n");
        return -1;
    }
    else
    {
      int val=ptr->arr[ptr->top];
      ptr->top--; 
      return val;
    
    }
}
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
    printf("%d \n",isempty(sp));
    push(sp,6);
    push(sp,7);
    push(sp,71);
    push(sp,10);
    push(sp,12);
    push(sp,56);
    printf("%d is popped out \n",pop(sp));
    printf("%d is popped out \n",pop(sp));
    printf("%d is popped out \n ",pop(sp));
    
    


}