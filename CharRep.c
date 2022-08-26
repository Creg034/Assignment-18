#include <stdio.h>
#include <string.h>
void swap(char *a, char *b);
void sortarr(char string[]);
int countReps(char str[], int count[]);
int main()
{                     // [0,1,2,3,4,5,6,7,8,9,0,1,2,3,4,5,6]
    char string[100]; // [M,Y, ,N,A,M,E, ,I,S, ,G,A,U,R,A,V]
    int count2[10];
    printf("Enter String: \n");
    // fgets(string, 100, stdin);
    scanf("%s", string);
    sortarr(string);
    int len = countReps(string, count2);
    return 0;
}
void swap(char *a, char *b)
{
    char tempstr = *a;
    *a = *b;
    *b = tempstr;
}
void sortarr(char string[])
{
    for (int i = 0; string[i]; i++)
    {
        for (int j = i + 1; string[j]; j++)
        {
            if (string[i] > string[j])
            {
                swap(&string[i], &string[j]);
            }
        }
    }
}
int countReps(char str[], int count2[])
{
    int count = 0, g = 0;
    for (int i = 0; str[i]; i++)
    {
        if (str[i] == str[i + 1])
        {
            count++;
        }
        else
        {
            printf("%c: %d\n", str[i], count + 1);
            count2[g] = count + 1;
            count = 0;
            g++;
        }
    }
    return g;
}