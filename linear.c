#include<stdio.h>
int linearinsertion(int arr[],int size,int element)
{  for(int i=0;i<size;i++)
    if(arr[i]==element)
    {
        return i;
    }
    
    return -1;
}

int main()
{
    int arr[]={2,3,45,67,8,78,98,67,67};
    int size=9;
    int element=65;
    int search=linearinsertion(arr,size,element);
    printf("The element %d is at index  %d ",element,search);

    

}