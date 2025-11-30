#include<stdio.h>
int binaryinsertion(int arr[],int size,int element)
{   
    int low,high,mid;
    low=0;
    high=size-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==element)
        {
            return mid;
        }
        if(arr[mid]<element)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
        return -1;
    }
    
}
int main()
{
    int arr[]={2,4,6,8,10,12,14,16,18,20};
    int size=sizeof(arr)/sizeof(arr[0]);
    int element=10;
    int search=binaryinsertion(arr,size,element); 
    printf("The element %d is at index : %d",element,search);
    
}