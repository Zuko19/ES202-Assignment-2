//Program to find frequency of each number in an integer
#include<stdio.h>

int main()
{
    long int count , n , i , j , r ;
    printf(" Enter the Integer :");
    scanf("%ld",&n);
    for (i = 0; i < 10; i++)
    {
        printf("The frequency of %ld = ",i);
        count = 0;
        for (j=n; j>0; j=j/10)
        {
            r = j % 10;
            if (r == i)
            {
                count++;
            }
        }
        printf("%ld \n",count );
    }
}
