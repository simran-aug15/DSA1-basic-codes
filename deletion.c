#include<stdio.h>
void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf(" %d ",arr[i]);
    }
    printf("\n");
}

int Deletion(int arr[],int size,int index)
{
    for(int i=index;i<=size-1;i++)
    {
        arr[i]=arr[i+1];
    }
}
int main()
{
    int arr[100]={12,34,56,78,98};
    int size=5;
    int index=3;
    display(arr,size);
    Deletion(arr,size,index);
    size=size-1;
    display(arr,size);

}