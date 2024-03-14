/*  
    LAB ASSIGNMENT: 07
    Question number: 06

    Roll number: 23CE01005
    Name: Anurag Mishra
    Branch: Civil Engineering
    Date: 08/03/2024
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char*ptr=NULL;
    char str[50], substr[50];
    printf("Enter string:\n");
    gets(str);
    printf("Enter substring:\n");
    gets(substr);

    ptr=strstr(str,substr);

    if(ptr==NULL)
    {
        printf("The sub-string '%s' was NOT found in '%s'",substr,str);
    }
    else
    {
        printf("The sub-string '%s' was found in '%s'",substr,str);
    }
    return 0;
}