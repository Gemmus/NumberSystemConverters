/*
Write a C program to input hexadecimal number from user and convert it to decimal number system.
How to convert from Hexadecimal number system to Decimal number system in C programming.
Logic to convert hexadecimal to decimal number system in C programming.

1. Input a hexadecimal number from user. Store it in some variable hex.
2. Initialize decimal = 0, digit = length_of_hexadecimal_digit - 1 and i = 0.
3. Run a loop for each hex digit. Which is the loop structure should look like for(i=0; hex[i]!='\0'; i++).
4. Inside the loop find the integer value of hex[i]. Store it in some variable say val.
5. Convert the hex to decimal using decimal = decimal + (val * 16 ^ digit). Where val = hex[i].
*/

#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    char hex[17];
    long long decimal = 0;
    int val, len;

    printf("Enter the hexadecimal number:\n");
    gets(hex);

    len = strlen(hex);
    len--;

    for(int i = 0; hex[i] != '\0'; i++)
    {
        if(hex[i]>='0' && hex[i]<='9')
        {
            val = hex[i] - 48;
        }
        else if(hex[i]>='a' && hex[i]<='f')
        {
            val = hex[i] - 97 + 10;
        }
        else if(hex[i]>='A' && hex[i]<='F')
        {
            val = hex[i] - 65 + 10;
        }

        decimal += val * pow(16, len);
        len--;
    }

    printf("Hexadecimal number: %s\n", hex);
    printf("Decimal number: %lld", decimal);

    return 0;
}
