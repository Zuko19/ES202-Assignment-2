//Program to print sum of odd numbers beween a range
#include <stdio.h>

void main()
{
    int i,n,s=0;
    printf("Enter the Limit :");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        if(i%2!=0)
            s = s + i;
    }
    printf("Sum of all odd Numbers between 1 to %d is %d",n,s);
}


