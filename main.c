#include <stdio.h>
#include <math.h>
#include "NumClass.h"
int main()
{
    int start, end;
    printf("Enter the start number please: \n");
    scanf("%d", &start);
    printf("Enter the end number please: \n");
    scanf("%d", &end);
    printf("The Armstrong numbers bewteen the range are: \n");

    for (int i = start; i <= end; i++)
    {
        if (isArmstrong(i) == 1)
        {
            printf("%d, ", i);
        }
    }
    printf("\n");

    printf("The Strong numbers bewteen the range are: \n");
    for (int i = start; i <= end; i++)
    {
        if (isStrong(i) == 1)
        {
            printf(" %d", i);
        }
    }
    printf("\n");

    printf("The Prime numbers bewteen the range are: \n");
    for (int i = start; i <= end; i++)
    {
        if (isPrime(i) == 1)
        {
            printf(" %d", i);
        }
    }
    printf("\n");

    printf("The Palindrome numbers bewteen the range are: \n");
    for (int i = start; i <= end; i++)
    {
        if (isPalindrome(i) == 1)
        {
            printf(" %d", i);
        }
    }
    printf("\n");
    
    return 0;
}