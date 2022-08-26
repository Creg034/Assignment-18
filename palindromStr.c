// with strrev function
#include <stdio.h>
#include <string.h>
int ispal(char string[]);
int main()
{
    char string[34];

    printf("Enter String: ");
    scanf("%s", &string[0]);

    if (ispal(string))
        printf("Its a Palindrom");
    else
        printf("Its not a Palindrom");

    return 0;
}
int ispal(char string[])
{
    char revCpy[34];
    strcpy(revCpy, string);
    strrev(revCpy);
    int yup = 0;
    for (int i = 0; string[i]; i++)
    {
        if (string[i] != revCpy[i])
        {
            yup = 1;
        }
    }
    if (yup == 0)
        return 1;

    return 0;
}