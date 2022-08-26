#include <stdio.h>
int stringLen(char string[]);
int main()
{
    char string[34];
    printf("Enter String: ");
    scanf("%s", string);
    int length = stringLen(string);
    printf("Length of String is: %d", length);
    return 0;
}

int stringLen(char string[])
{
    int count = 0;
    for (int i = 0; string[i]; i++)
    {
        count++;
    }
    return count;
}