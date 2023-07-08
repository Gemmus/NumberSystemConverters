/*
Write a C program to input decimal number from user and convert to octal number system.
How to convert from decimal number system to octal number system in C programming.
Logic to convert decimal to octal number system in C programming.
*/

#include <stdio.h>

int main()
{
    long long decimal, tempDecimal, octal;
    int remainder, place = 1;

    octal = 0;

    printf("Enter the decimal number:\n");
    scanf("%lld", &decimal);

    tempDecimal = decimal;

    while(tempDecimal > 0)
    {
        remainder = tempDecimal % 8;
        octal += remainder * place;

        tempDecimal /= 8;
        place *= 10;
    }

    printf("Decimal number: %lld\n", decimal);
    printf("Octal number: %lld", octal);

    return 0;
}
