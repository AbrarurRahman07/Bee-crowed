#include <stdio.h>
int main()
{
    int x, circle = 1, total = 1;

    while (scanf("%d", &x) != EOF)
    {
        for (int i = 0; i <= x; i++)
        {
            int y = i;
            for (int j = 0; j < y; j++)
            {
                total++;
            }
        }
        printf("Caso %d: %d", circle, total);
        if (total > 1)
            printf(" numeros\n");
        else
            printf(" numero\n");

        total = 1;
        circle++;

        printf("0");
        for (int i = 0; i <= x; i++)
        {
            int y = i;
            for (int j = 0; j < y; j++)
            {
                printf(" %d", y);
            }
        }
        printf("\n\n");
    }

    return 0;
}
