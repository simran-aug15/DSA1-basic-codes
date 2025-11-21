#include<stdio.h>
#include<stdlib.h>
struct queue
{
    int size;
    int f,r;
    int* arr;
};
int isfull(struct queue* q)
{
    if(q->r==q->size-1)
    {
        return 1;
    }
    return 0;
}
void enqueue(struct queue* q,int val)
{
    if(isfull(q))
    {
        printf("This queue is full");
    }
    else{
        q->r++;
        q->arr[q->r]=val;
        printf(" The values is %d \n",val);
    }
}
int main()
{
    struct queue q;
    q.size=5;
    q.f=q.r=-1;
    q.arr=(int*)malloc(q.size*sizeof(int));
    enqueue(&q,12);
    enqueue(&q,56);
    enqueue(&q,30);
    enqueue(&q,15);


}