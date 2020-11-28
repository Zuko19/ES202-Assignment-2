//Program to print even numbers between 1 - 100
#include <stdio.h>

void main()
{
    int a;
    for(a=1; a<101; a++)
    {
        if(a%2==0)
            printf("%d \n",a);
    }
}


