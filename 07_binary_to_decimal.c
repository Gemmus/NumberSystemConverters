/*
Write a C program to input binary number from user and convert binary number to decimal number system.
How to convert from binary number system to decimal number system in C programming.
Logic to convert binary to decimal number system in C programming.

1. Input binary number from user. Store it in a variable say binary.
2. Find last digit from binary by performing modulo division. Which is lastDigit = binary % 10.
3. If lastDigit is 1. Then add power of 2 to the decimal result. Which is decimal += pow(2, N), where N is the position from right.
*/

#include <stdio.h>
#include <math.h>
#define BASE 2

int main()
{
    long long binary, decimal = 0, tempBinary;
    int N = 0;

    printf("Enter the binary number:\n");
    scanf("%lld", &binary);

    tempBinary = binary;

    while(tempBinary != 0)
    {
        if(tempBinary % 10 == 1)
        {
            decimal += pow(BASE, N);
        }
        N++;
        tempBinary /= 10;
    }

    printf("Binary number: %lld\n", binary);
    printf("Decimal number: %lld", decimal);

    return 0;
}
