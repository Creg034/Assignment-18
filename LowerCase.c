#include <stdio.h>
int main()
{
    char string[34];
    printf("Enter String: \n");
    scanf("%s", &string[0]);

    for (int i = 0; string[i]; i++)
    {
        if (string[i] >= 'A' && string[i] <= 'Z')
        {
            string[i] = string[i] + 32;
        }
    }
    printf("%s", string);
    return 0;
}