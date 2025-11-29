#include<stdio.h>
int selectionsort(int arr[],int size)
{  int min ,i,temp;
    for(int i=0;i<size-1;i++)
    {
        int min=i;
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
    
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
}

    
    int main()
    {
        int arr[]={2,56,34,78,12};
        int size=sizeof(arr)/sizeof(arr[0]);
        printf("Element before ");
        for(int i=0;i<size;i++)
        {
            printf("%d  ",arr[i]);
        }
        printf("\n");
        selectionsort(arr,size);
        printf("Elements after ");
        for(int i=0;i<size;i++)
        {
            printf("%d  ",arr[i]);
        }

    }

