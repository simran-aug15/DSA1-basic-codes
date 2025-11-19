//subtracting the pointer
#include<stdio.h>
int main()
{
    int a=10,b=7;
    int *p1,*p2;
    p1=&a;
    p2=&b;
    int value=*p1-*p2;
    printf("subtract the pointer = %d",value);
}