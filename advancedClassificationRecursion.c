#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "NumClass.h"
#define NumOfDigits(a) floor(log10(a)) + 1

int isArmstrongRec(int x, int nDigits)
{
    if (x > 0)
    {
        return (pow((x % 10), nDigits) + isArmstrongRec((x / 10), nDigits));
    }
    return 0;
}

int isArmstrong(int y)
{
    int Yarm = isArmstrongRec(y, NumOfDigits(y));
    if (y == Yarm)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isPalindrome(int num)
{
    int reminder, sum = 0;
    int temp = num;
    while (num > 0)
    {
        reminder = num % 10;
        sum = (sum * 10) + reminder;
        num = num / 10;
    }
    if (temp == sum)
    {
        printf("the number %d is a palindrome", num);
    }
    else
    {
        return printf("the number %d is not a palindrome", num);
    }
    return 0;
}