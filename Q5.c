//prrogram to calculate number of digits in a number
#include <stdio.h>

void main()
{
    long int num;
    int count = 0;

    printf("Enter a number: ");
    scanf("%ld", &num);

    while (num > 0)
    {
        num = num / 10;
        count++;
    }
    printf("Number of digits = %d", count);
}
