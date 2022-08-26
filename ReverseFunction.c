#include <stdio.h>
void revStr(char string[]);
int stringLen(char string[]);
void swap(char *a, char *b);
int main()
{
    char string[34];
    printf("Enter String: ");
    scanf("%s", string);
    revStr(string);
    printf("%s", string);
    return 0;
}
void revStr(char string[])
{
    int length = stringLen(string);
    for (int i = 0; i < length / 2; i++)
    {
        swap(&string[i], &string[(length - 1) - i]);
    }
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
void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}