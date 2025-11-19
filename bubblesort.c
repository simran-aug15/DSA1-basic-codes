#include<stdio.h>
int main()
{
    int a[10]={2,6,4,8,10,12,89,68,45,37};
    int pass,hold,i;
    printf("Data item in Original order ");
    for(i=0;i<10;i++)
    {
        printf("%d  ",a[i]);
    }
    printf("\n");
    for(pass=1;pass<10;pass++)
    {
        for(i=0;i<10-1;i++)
        {
            if(a[i]>a[i+1])
            {
                hold=a[i];
                a[i]=a[i+1];
                a[i+1]=hold;
            }
        }
    }
    printf("Item in ascending order ");
    for(i=0;i<10;++i)
    {
        printf("%d  ",a[i]);
    }
}

