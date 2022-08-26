#include <stdio.h>
int alphanumeric(char string[34]);
int main()
{
    char string[34];
    printf("Enter String: ");
    scanf("%s", &string);
    int ans = alphanumeric(string); if (ans == 1)
        printf("String is Alphanumeric");
        else
        printf("Its not an Alphanumeric");

    return 0;
}
int alphanumeric(char string[34])
{
    int alpha = 0;
    int numeric = 0;
    for (int i = 0; string[i] != 0; i++)
    {
        if (string[i] >= 'a' && string[i] <= 'z' || string[i] >= 'A' && string[i] <= 'Z')
        {
            alpha = 1;
        }
        else if (string[i] >= '0' && string[i] <= '9')
        {
            numeric = 1;
        }
    }
    if (alpha && numeric)
    {
        return 1;
    }
    return 0;
}