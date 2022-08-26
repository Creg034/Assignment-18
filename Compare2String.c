#include <stdio.h>
#include <string.h>
int stringCmp(char string[], char string2[]);
int stringLen(char str1[], char str2[]);
int main()
{
    char string[34];
    char string2[34];
    printf("Enter First String: ");
    scanf("%s", &string[0]);
    printf("Enter Second String: ");
    scanf("%s", &string2[0]);

    int ans = stringCmp(string, string2);
    printf("\n* %d *", ans);
    return 0;
}
int stringCmp(char string[], char string2[])
{
    int length;
    length = stringLen(string, string2);
    for (int i = 0; i < length; i++)
    {
        if (string[i] == string2[i])
        {
            continue;
        }
        else
        {
            int a = string[i], b = string2[i];
            if (a < b)
            {
                return -1;
            }
            else
                return 1;
        }
    }
    return 0;
}
int stringLen(char str1[], char str2[])
{
    int count1 = 0, count2 = 0;
    for (int i = 0; str1[i] != '\0'; i++)
    {
        count1++;
    }
    for (int i = 0; str2[i] != 0; i++)
    {
        count2++;
    }
    if (count1 <= count2)
    {
        return count1;
    }
    else
        return count2;
}
// This function was funtomake
