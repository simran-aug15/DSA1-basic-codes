//write a program to make de reference pointer
#include<stdio.h>
int main()
{
    int a=4;
    int b=5.5;
    int *p;
    p=&a;
    printf("%d \n",*p);
    printf("%p \n",p);
    *p = 11 ;
    printf("%d \n",*p);
    printf("%p \n",p);
    return 0;
}