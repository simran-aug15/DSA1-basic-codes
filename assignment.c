//assignment operator
#include<stdio.h>
int main(){
    int a=5;
    int b=7;
    int *ptr1;
    int *ptr2;
    ptr1=&a;
    ptr2=&b;
    printf(" \n the value of ptr1 and ptr2 is: %d %d",*ptr1,*ptr2);
    printf(" \n the value of ptr1 and ptr2 is: %d %d",ptr1,ptr2);
    *ptr1=*ptr2;
     ptr1=ptr2;
     printf(" \n the value of ptr1 and ptr2 is: %d %d",*ptr1,*ptr2);
     printf(" \n the value of ptr1 and ptr2 is:%d %d",ptr1,ptr2);
     return 0;
    
}