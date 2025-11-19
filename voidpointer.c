//use of void pointer
#include<stdio.h>
int main()
{
    int a=10;
    char c='R';
    void *ptr;
    ptr=&a;
    printf(" \n the value of generic pointer is  %d",(*(int*)ptr));
    ptr=&c;
    printf(" \n the value of generic pointer is   %c",(*(char*)ptr));
}