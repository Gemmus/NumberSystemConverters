/*
Write a C program to input decimal number from user and convert to hexadecimal number system.
How to convert Decimal to Hexadecimal number system in C programming.
Logic to convert decimal to hexadecimal number system in C programming.
*/

#include <stdio.h>

int main()
{
    char HEXVALUE[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

    long long decimal, tempDecimal;
    char hex[65], reverse[65];
    int index = 0, remainder, hexIndex, revIndex;

    printf("Enter the decimal number:\n");
    scanf("%lld", &decimal);
    tempDecimal = decimal;

    while(tempDecimal !=0)
    {
        remainder = tempDecimal % 16;
        hex[index] = HEXVALUE[remainder];

        tempDecimal /= 16;
        index++;
    }
    hex[index] = '\0';

    revIndex = 0;
    hexIndex = index - 1;
    while(hexIndex >= 0)
    {
       	reverse[revIndex] = hex[hexIndex];
       	hexIndex--;
       	revIndex++;
    }
	reverse[revIndex] = '\0';

    printf("Decimal number: %lld\n", decimal);
    printf("Hexadecimal number: %s", reverse);

    return 0;
}
