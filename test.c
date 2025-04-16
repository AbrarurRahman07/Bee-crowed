#include <stdio.h>
#include <string.h>

int main()
{
    char s[101], result[101];
    int len, index = 0;

    scanf("%s", s);
    len = strlen(s);

    for (int i = 0; i < len; i++)
    {
        int is_unique = 1; // Assume the character is unique
        for (int j = 0; j < i; j++)
        {
            if (s[i] == s[j])
            {
                is_unique = 0; // Found a duplicate
                break;
            }
        }
        if (is_unique)
        {
            result[index++] = s[i]; // Add unique character to result
        }
    }

    result[index] = '\0'; // Null-terminate the result string

    // Print the resulting string without duplicate characters
    printf("%s\n", result);

    return 0;
}
