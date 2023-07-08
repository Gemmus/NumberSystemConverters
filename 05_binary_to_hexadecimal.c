/*
Write a C program to input binary number from user and convert to hexadecimal number system.
How to convert binary to hexadecimal number system in C program.
Logic to convert binary to hexadecimal number system in C programming.

1. Group all binary bits to 4 digits starting from right side.
2. Write corresponding hexadecimal value of each grouped digit.
*/

#include <stdio.h>

int main()
{
    int hexConstant[] = {0, 1, 10, 11, 100, 101, 110, 111, 1000, 1001, 1010, 1011, 1100, 1101, 1110, 1111};

    long long binary, tempBinary;
    char hex[20], reverse[20];
    int index = 0, digit, hexIndex, revIndex;

    printf("Enter the binary number:\n");
    scanf("%lld", &binary);

    tempBinary = binary;

    while(tempBinary != 0)
    {
        digit = tempBinary % 10000;

        for(int i = 0; i < 16; i++)
        {
            if(hexConstant[i] == digit)
            {
                if(i < 10)
                {
                    hex[index] = (char)(i + 48);
                }
                else
                {
                    hex[index] = (char)((i - 10) + 65);
                }
                index++;
                break;
            }
        }
        tempBinary /= 10000;
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

    printf("Binary number: %lld\n", binary);
    printf("Hexadecimal number: %s", reverse);

    return 0;
}
