//Program to Print all the ASCII values
#include<stdio.h>
void main()
{
    int i;
    char c;
    for(i=0; i<=255; i++)
    {
        c = i;
        printf("ASCII Value of %c is %d \n",c,i);
    }
}