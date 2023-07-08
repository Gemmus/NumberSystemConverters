/*
Write a C program to input Octal number from user and convert to Binary number system.
How to convert from Octal number system to Binary number system in C.
Logic to convert octal to binary number system in C programming.
*/

#include <stdio.h>

int main()
{
    int OCTALVALUES[] = {0, 1, 10, 11, 100, 101, 110, 111};
    long long octal, tempOctal, binary = 0, place = 1;
    int remainder;

    printf("Enter the octal number:\n");
    scanf("%lld", &octal);

    tempOctal = octal;

    while(tempOctal > 0)
    {
        remainder = tempOctal % 10;

        binary += OCTALVALUES[remainder] * place;

        tempOctal /= 10;
        place *= 1000;
    }

    printf("Octal number: %lld\n", octal);
    printf("Binary number: %lld", binary);

    return 0;
}
