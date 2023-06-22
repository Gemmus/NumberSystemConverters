/*
Write a C program to input binary number from user and find ones complement of binary number using loop.
How to find 1s complement of a binary number in C programming.
Logic to find ones complement of binary number in C programming.

Ones complement of a binary number is defined as value obtained by inverting all binary bits.
̈́It is the result of swapping all 1s to 0s and all 0s to 1s.
*/

#include <stdio.h>
#define SIZE 8

int main()
{
    char binary[SIZE + 1], onesComp[SIZE + 1];
    int error = 0;

    printf("Enter %d bit binary value: ", SIZE);
    gets(binary);

    for(int i = 0; i < SIZE; i++)
    {
        if(binary[i] == '1') onesComp[i] = '0';
        else if(binary[i] == '0') onesComp[i] = '1';
        else
        {
            printf("Invalid Input");
            error = 1;
            break;
        }
    }

    onesComp[SIZE] = '\0';

    if(error == 0)
    {
        printf("Original binary = %s\n", binary);
        printf("Ones complement = %s", onesComp);
    }

    return 0;
}
