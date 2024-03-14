/*
    LAB ASSIGNMENT: 07
    Question number: 01

    Roll number: 23CE01005
    Name: Anurag Mishra
    Branch: Civil Engineering
    Date: 8/03/2024
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int i = 0, count = 0, sen;
    char str[50], ch;
    printf("Enter the string:\n");
    gets(str);
    printf("Enter the character to be find frequency:\n");
    scanf("%c", &ch);

    do
    {
    printf("Press '1' for case-sensitive and '0' for case-insensitive:\n");
    scanf("%d",&sen);
    } while(sen!=0&&sen!=1);

    if(sen==0)
    {
        strlwr(str);
        ch=tolower(ch);
    }

    while (str[i] != '\0')
    {
        if (str[i] == ch)
        {
            count++;
        }
        i++;
    }
    printf("Frequency of '%c' in '%s' is: %d\n", ch, str, count);
    return 0;
}