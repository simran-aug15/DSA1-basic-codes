//increment operator in pointer in array
#include<stdio.h>
int main()
{
    int a[5]={10,20,30,40,50};
    int *p1;
    p1=&a[0];
    printf("%d \n",p1);
    p1++;
    printf("%d \n",p1);
    return 0;
    
}