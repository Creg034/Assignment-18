#include <stdio.h>
#include <string.h>
// [my name is gaurav]
// [01 3456 89 012345]
int main()
{
    char string[100];
    char string2[100];
    int s = 0, end = 0;
    int l = 0;
    printf("Enter String Below: ");
    // fgets(string, 100, stdin);
    gets(string);
    int last = strlen(string);
    for (int i = 0; string[i]; i++)
    {
        if (string[i] == ' ' || i == last - 1)
        {
            end = i;
            if (i == last - 1)
            {
                end += 1;
            }
            for (int start = end - 1; start >= s; start--)
            {
                string2[l] = string[start];
                l++;
            }
            s = end + 1;
            string2[l] = 32;
            l += 1;
        }
    }
    // String garbage remover
    for (int i = 0; string2[i] != '\0'; i++)
    {
        if (string[i] == 0)
        {
            string2[i] = 0;
        }
    }

    strrev(string2);
    printf("%s", string2);

    return 0;
}

// Brain Eater Questions
// Moral : logic was hard to code, but when sir said it to do that i did it,
// it means we just have to keep faith on our logic, an find solution

