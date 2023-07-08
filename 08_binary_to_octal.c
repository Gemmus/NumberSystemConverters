/*
Write a C program to input binary number from user and convert to octal number system.
How to convert from binary number system to octal number system in C.
Logic to convert binary to octal number system in C programming.

1. Input binary number from user. Store it in a variable say binary.
2. Initialize a variable to store converted octal say octal = 0.
3. Find the last three digits of binary say digit = num % 1000.
4. Find the octal equivalent (using binary to octal table) of the three binary digits found above.
5. Add octal value of binary found in above step to octal, by increasing the place value.
6. Remove the last three digits of the binary number. Since they are processed, say binary = binary / 1000.
7. Increase the place value of octal by using place = place * 10.
8. Repeat step 3 to 7 till binary > 0.
*/

#include <stdio.h>

int main()
{
    int octalConstant[] = {0, 1, 10, 11, 100, 101, 110, 111};

    long long binary, octal = 0, tempBinary;
    int digit, place = 1;

    printf("Enter the binary number:\n");
    scanf("%lld", &binary);

    tempBinary = binary;

    while(tempBinary != 0)
    {
        digit = tempBinary % 1000;

        for(int i = 0; i < 8; i++)
        {
            if(octalConstant[i] == digit)
            {
                octal = (i * place) + octal;
                break;
            }
        }

        tempBinary /= 1000;
        place *= 10;
    }

    printf("Original binary number: %lld\n", binary);
    printf("Octal number: %lld", octal);

    return 0;
}
