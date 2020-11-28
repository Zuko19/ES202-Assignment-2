// program to find first and last digit of number
#include <stdio.h>
void main()
{
    int n,rem,f,l;
    printf("Enter the mumber :");
    scanf("%d",&n);
    l = n%10;
    printf("Last Digit :%d",l);
    while(n>0)
    {
        rem = n%10;
        n = n/10;
        f = rem;
    }
    printf("\nFirst Digit :%d",f);
}

