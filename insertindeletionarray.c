#include<stdio.h>
void display(int arr[],int n)
{
   for(int i=0;i<n;i++)
   {
      printf(" %d ",arr[i]);

   }
   printf(" \n ");
}

   int indInsertion(int arr[],int size,int element,int capacity,int index)
   {
      if(size>=capacity)
      {
         return -1;
      }
      for(int i=size-1;i>=index;i--)
      {
         arr[i+1]=arr[i];
      }
      arr[index]=element;
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
         int arr[100]={1,56,78,12,67};
         int size=5;
         int element=45;
         int index=3;
         printf("Element before insertion and deletion");
         display(arr,size);
         indInsertion(arr,size,element,100,index);
         size=size+1;555
         printf("Element after insertion");
         display(arr,size);
         Deletion(arr,size,index);55
         size=size-1;
         printf("Element after deletion");
         display(arr,size);

      }
   



