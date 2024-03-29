/*
Write a C program to input binary number from user and find twos complement of the binary number.
How to find 2s complement of a binary number in C.
Logic to find twos complement of a binary number in C programming.
*/

#include <stdio.h>
#define SIZE 8

int main()
{
    char binary[SIZE + 1], onesComp[SIZE + 1], twosComp[SIZE + 1];
    int carry = 1;

    printf("Enter %d bit binary value: ", SIZE);
    gets(binary);

    for(int i = 0; i < SIZE; i++)
    {
        if(binary[i] == '1') onesComp[i] = '0';
        else if(binary[i] == '0') onesComp[i] = '1';

    }
    onesComp[SIZE] = '\0';

    for(int i = SIZE - 1; i >= 0; i--)
    {
        if(onesComp[i] == '1' && carry == 1) twosComp[i] = '0';
        else if(onesComp[i] == '0' && carry == 1)
        {
            twosComp[i] = '1';
            carry = 0;
        }
        else twosComp[i] = onesComp[i];
    }
    twosComp[SIZE] = '\0';

    printf("Original binary = %s\n", binary);
    printf("Ones complement = %s\n", onesComp);
    printf("Twos complement = %s\n", twosComp);

    return 0;
}
