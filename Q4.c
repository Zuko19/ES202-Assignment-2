//Program to print Multiplicationtable of a number
#include <stdio.h>

void main()
{
    int n,i,f;
    printf("Enter the Number :");
    scanf("%d",&n);
    printf("Multiplication Table of %d:-\n",n);
    for(i=1; i<=10; i++)
    {
        f = n*i;
        printf("%d X %d = %d \n",n,i,f);
    }
}


