// write a program to make sum of two pointers.
#include <stdio.h>
int main()
{
    int a = 10;
    int b = 4;
    int *c, *d;
    c = &a;
    d = &b;
    int sum = *c + *d;
    printf("%d", sum);
}