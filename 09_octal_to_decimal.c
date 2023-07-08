/*
Write a C program to input octal number from user and convert to decimal number system.
How to convert from Octal number system to Decimal number system in C program.
Logic to convert octal to decimal number system in C programming.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    long long octal, tempOctal, decimal = 0;
    int remainder, place = 0;

    printf("Enter the octal number:\n");
    scanf("%lld", &octal);

    tempOctal = octal;

    while(tempOctal > 0)
    {
        remainder = tempOctal % 10;

        decimal += pow(8, place) * remainder;

        tempOctal /= 10;
        place++;
    }

    printf("Octal number: %lld\n", octal);
    printf("Decimal number: %lld", decimal);

    return 0;
}
