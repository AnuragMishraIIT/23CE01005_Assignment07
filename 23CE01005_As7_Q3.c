/*  
    LAB ASSIGNMENT: 07
    Question number: 03

    Roll number: 23CE01005
    Name: Anurag Mishra
    Branch: Civil Engineering
    Date: 08/03/2024
*/

#include <stdio.h>
#include <string.h>

void revString(char*str,int size)
{
    if (size <= 1)
    { return;   }
    int first=0,last=size-1;
    char temp_ch;
    temp_ch=str[first];
    str[first]=str[last];
    str[last]=temp_ch;
    str++;
    revString(str,size-2);
}

int main()
{
    int size;
    char str[50];
    printf("Enter the string:\n");
    gets(str);
    size=strlen(str);
    revString(str,size);
    printf("The reversed string is: %s\n",str);

    return 0;
}