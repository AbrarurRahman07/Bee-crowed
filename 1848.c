#include <stdio.h>
#include <string.h>

int blink_to_value(char *blink)
{
    int value = 0;
    if (blink[0] == '*') value += 4;
    if (blink[1] == '*') value += 2;
    if (blink[2] == '*') value += 1;
    return value;
}

int main()
{
    char input[10];
    int sum = 0, results[3], scream_count = 0;

    while (scream_count < 3)
    {
        fgets(input, 10, stdin);

        // Remove newline character if present
        input[strcspn(input, "\n")] = 0;

        if (strcmp(input, "caw caw") == 0)
        {
            results[scream_count++] = sum;
            sum = 0;
        }
        else
        {
            sum =sum+ blink_to_value(input);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", results[i]);
    }

    return 0;
}
