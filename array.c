//array to pointer
#include<stdio.h>
int main()
{
    int *a;
    int arr[10]={10,20,30,40,50};
    a=&arr;
   printf("%d \n",a);
   printf("%d \n",&a);
   printf("%d \n",*a);
   printf("%d \n",a[0]);
   printf("%d \n",(a+1));
   printf("%d \n",&a[1]);
   printf("%d \n",*(a+1));
   printf("%d",a[1]);
   return 0;
   
}