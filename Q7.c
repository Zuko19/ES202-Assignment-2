//Program to swap last and first digit of a number
#include <stdio.h>
#include <math.h>
void main()
{
    int num, swappedNum;
    int f, l, dig;

    printf("Enter the number: ");
    scanf("%d", &num);
    l = num % 10;
    dig = (int)log10(num);
    f = (int)(num / pow(10, dig));
    swappedNum  = l;
    swappedNum *= (int) pow(10, dig);
    swappedNum += num % ((int) pow(10, dig));
    swappedNum -= l;
    swappedNum += f;

    printf("Original number = %d \n", num);
    printf("Number after swapping first and last digit: %d", swappedNum);

}
