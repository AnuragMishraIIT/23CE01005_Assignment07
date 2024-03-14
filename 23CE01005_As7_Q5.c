/*
    LAB ASSIGNMENT: 07
    Question number: 05

    Roll number: 23CE01005
    Name: Anurag Mishra
    Branch: Civil Engineering
    Date: 08/03/2024
*/

#include <stdio.h>
#include <string.h>

void main()
{
    char string[25], reverse_string[25];
    int i, length = 0, flag = 0;

    printf("Enter string:\n");
    gets(string);

    for (i = 0; string[i] != '\0'; i++)
    {
        length++;
    }

    for (i = length - 1; i >= 0; i--)
    {
        reverse_string[length - i - 1] = string[i];
    }
    reverse_string[length-i-1]='\0';

    for (flag = 1, i = 0; i < length; i++)
    {
        if (reverse_string[i] != string[i])
            flag = 0;
    }

    if (flag == 1)
        printf("%s is a palindrome \n", string);
    else
        printf("%s is not a palindrome \n", string);
}