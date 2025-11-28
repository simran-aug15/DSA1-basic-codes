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
        
    }
}
int isempty(struct queue* q)
{
    if(q->r==q->f)
{
    return 1;
}
return 0;

}
int dequeue(struct queue* q)
{
    int a=-1;
    if(isempty(q))
    {
        printf("This queue is empty");
    }
    else
    {
       q->f++;
       a=q->arr[q->f];
       return a;
    }
}
int main()
{ struct queue q;
    q.size = 100;
    q.f = q.r = -1;
    q.arr = (int*)malloc(q.size * sizeof(int));

    int u;
    
    int visited [7]={0,0,0,0,0,0,0};
    int a[7][7]={
    {0,1,1,1,0,0,0},
    {1,0,0,1,0,0,0},
    {1,1,0,1,1,0,0},
    {1,0,1,0,1,0,0},
    {0,0,1,1,0,1,1},
    {0,0,0,0,1,0,0},
    {0,0,0,0,1,0,0}
         };
         int i=0;
   printf("%d",i);
   visited[i]=1;
   enqueue(&q,i);
   while(!isempty(&q))
   {
     int u=dequeue(&q);
   
   for(int j=0;j<7;j++)
   {
    if(a[u][j]==1 &&visited[j]==0)
    {
        printf("%d \n",j);
        visited[j]=1;
        enqueue(&q,j);
    }
   }
}
 return 0;

}