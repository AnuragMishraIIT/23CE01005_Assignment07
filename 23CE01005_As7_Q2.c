/*
    LAB ASSIGNMENT: 07
    Question number: 02

    Roll number: 23CE01005
    Name: Anurag Mishra
    Branch: Civil Engineering
    Date: 8/03/2024
*/

#include <stdio.h>

int main()
{
    int i = 0, j = 0;
    char str[50], out[50];
    printf("Input the string:\n");
    gets(str);

    while (str[i] != '\0')
    {
        if ((str[i] <= 90 && str[i] >= 65) || (str[i] <= 122 && str[i] >= 97))
        {
            out[j] = str[i];
            j++;
        }
        i++;
    }
    out[j]='\0';
    printf("Output: %s\n", out);

    return 0;
}