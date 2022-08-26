#include <stdio.h>
int wordCounter(char array[]);
int main()
{
    char string[100];
    printf("Enter Sentence: \n");
    fgets(string, 100, stdin);
    // 32 ---> ' '
    int count = 0;
    count = wordCounter(string);
    printf("Words: %d", count);
    return 0;
}
// Nice Experiment
int wordCounter(char array[])
{
    int count = 0;
    for (int i = 0; array[i]; i++)
    {
        if (array[i] == 32)
        {
            if (array[i + 1] > 32 && array[i] <= 126)
                count++;
        }
    }
    count += 1;
    return count;
}