#include<stdio.h>
int linearinsertion(int arr[],int size,int element)
{  for(int i=0;i<size;i++)
    if(arr[i]==element)
    {
        return i;
    }
    
    return -1;
}
int binaryinsertion(int arr[],int size,int element1)
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
    int arr[]={2,3,5,8,9,10,14,16,18,20,24,26,29,30,45};
    int size=sizeof(arr)/sizeof(arr[0]);
    int element=8;
    int element1=10;
    int search=linearinsertion(arr,size,element);
    printf("The element %d is at index  %d ",element,search);
    printf("\n");
    int search1=binaryinsertion(arr,size,element1); 
    printf("The element %d is at index : %d",element1,search1);
    
    

}