/*
Write a C program to input octal number from user and convert to hexadecimal number system.
How to convert from octal number system to hexadecimal number system in C program.
Logic to convert octal to hexadecimal number system in C programming.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    int OCTALVALUES[] = {0, 1, 10, 11, 100, 101, 110, 111};

    long long octal, tempOctal, binary = 0, place = 1;
    char hex[65], reverse[65];
    int remainder, hexIndex, revIndex, len;

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

    while(binary > 0)
    {
        remainder = binary % 10000;
        switch(remainder)
        {
            case 0:
                strcat(hex, "0");
                break;
            case 1:
                strcat(hex, "1");
                break;
            case 10:
                strcat(hex, "2");
                break;
            case 11:
                strcat(hex, "3");
                break;
            case 100:
                strcat(hex, "4");
                break;
            case 101:
                strcat(hex, "5");
                break;
            case 110:
                strcat(hex, "6");
                break;
            case 111:
                strcat(hex, "7");
                break;
            case 1000:
                strcat(hex, "8");
                break;
            case 1001:
                strcat(hex, "9");
                break;
            case 1010:
                strcat(hex, "A");
                break;
            case 1011:
                strcat(hex, "B");
                break;
            case 1100:
                strcat(hex, "C");
                break;
            case 1101:
                strcat(hex, "D");
                break;
            case 1110:
                strcat(hex, "E");
                break;
            case 1111:
                strcat(hex, "F");
            break;
        }

        binary /= 10000;
    }

    len = strlen(hex);

    revIndex = 0;
    hexIndex = len - 1;
    while(hexIndex >= 0)
    {
    	reverse[revIndex] = hex[hexIndex];
    	hexIndex--;
    	revIndex++;
    }
    reverse[revIndex] = '\0';

    printf("Octal number: %lld\n", octal);
    printf("Hexadecimal number: %s", reverse);

    return 0;
}
