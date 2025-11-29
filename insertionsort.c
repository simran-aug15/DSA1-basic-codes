#include<stdio.h>
int insertionsort(int arr[],int size)
{
    int i,j,key;
    for(i=1;i<size;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}
int main()
    {
        int arr[]={2,56,34,78,12};
        int size=sizeof(arr)/sizeof(arr[0]);
        printf("Elements before sorting \n ");
        for(int i=0;i<size;i++)
        {    
            printf("%d  ",arr[i]);
        }
        insertionsort(arr,size);
        printf("Element after sorting \n");
        for(int i=0;i<size;i++)
        {    
            printf("%d  ",arr[i]);
        }

    }
