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
    {   int pass,hold,i;
        int arr[]={2,56,34,78,12};
        int size=sizeof(arr)/sizeof(arr[0]);
        printf("Elements before sorting  ");
        for(int i=0;i<size;i++)
        {    
            printf("%d  ",arr[i] );
            
        }
        printf("\n");
        for(pass=1;pass<10;pass++)
    {
        for(i=0;i<10-1;i++)
        {
            if(a[i]>a[i+1])
            {
                hold=a[i];
                a[i]=a[i+1];
                a[i+1]=hold;
            }
        }
    }
    printf("Item in ascending order ");
    for(i=0;i<10;++i)
    {
        printf("%d  ",a[i]);
    }
      printf("\n");
        selectionsort(arr,size);
        printf("Elements after ");
        for(int i=0;i<size;i++)
        {
            printf("%d  ",arr[i]);
        }
        printf("\n");
         insertionsort(arr,size);
        printf("Element after sorting ");
        for(int i=0;i<size;i++)
        {    
            printf("%d  ",arr[i]);
        }

    }
