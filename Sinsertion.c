#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int size;
    int top;
    int*arr;
};
int isempty(struct stack*ptr)
{
    if(ptr->top==-1)
    {
        return 1;
    }
    else{
        return 0;
    }

}

int isfull(struct stack*ptr)
{
    if(ptr->top==ptr->size-1)
    { 
        return 1;
    }
    else 
    {
        return 0;
    }
}
void push(struct stack* ptr,int val)
{
    if(isfull(ptr))
    {
        printf("Stack overflow !cannot be push %d \n",val);
    }
    else
    {
       ptr->top++;
       ptr->arr[ptr->top]=val;
       printf("%d stack is push\n",val);
    }
}
int main()
{
    struct stack* sp=(struct stack*)malloc (sizeof (struct stack));
    sp->size=4;
    sp->top=-1;
    sp->arr=(int*)malloc (sp->size* sizeof(int));

    printf("Stack has been created\n");
    printf("%d \n",isfull(sp));
    push(sp, 4);
    push(sp, 41);
    push(sp, 44);
    push(sp, 46);
    push(sp, 89);
    printf("%d \n",isfull(sp));


}
