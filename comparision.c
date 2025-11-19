//comparision of a pointer
#include<stdio.h>
int main()
{
    int a=10;
    int b=20;
    
    int *p1,*p2;
    p1=&a;
    p2=&b;
    printf("%p \n",p1 );
    printf("%d \n",*p1);
    if(*p1>=*p2){
        printf("p1 is greater");
    
    }
    else if(*p1<=*p2){
        printf("p1 is smaller");
    }
    else
    {
        printf("the end");
    }

}