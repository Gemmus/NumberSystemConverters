/*
Write a C program to input decimal number from user and convert to binary number system.
How to convert from decimal number to binary number system in C program.
Logic to convert decimal to binary number system in C programming.
*/

#include <stdio.h>

int main()
{
    long long decimal, tempDecimal, binary = 0;
    int remainder, place = 1;


    printf("Enter the decimal number: ");
    scanf("%lld", &decimal);
    tempDecimal = decimal;

    while(tempDecimal > 0)
    {
        remainder = tempDecimal % 2;
        binary += remainder * place;

        tempDecimal /= 2;
        place *= 10;
    }

    printf("Decimal number: %lld\n", decimal);
    printf("Binary number: %lld", binary);

    return 0;
}
