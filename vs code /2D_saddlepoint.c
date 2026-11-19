#include <stdio.h>

int main()
{
    int a[10][10], r, c, i, j, k;
    int min, check = 0;

    scanf("%d %d", &r, &c);

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            min = 1;

            for (k = 0; k < c; k++)
            {
                if (a[i][j] > a[i][k])
                    min = 0;
            }

            for (k = 0; k < r; k++)
            {
                if (a[i][j] < a[k][j])
                    min = 0;
            }

            if (min == 1)
            {
                printf("%d %d %d", i, j, a[i][j]);
                check = 1;
                return 0;
            }
        }
    }

    if (check == 0)
        printf("None");

    return 0;
}
