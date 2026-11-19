#include <stdio.h>

int main()
{
    int n, a[100], i, j, diff, min;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    min = 999999;

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            diff = a[i] - a[j];

            if (diff < 0)
                diff = -diff;

            if (diff < min)
                min = diff;
        }
    }

    printf("%d", min);

    return 0;
}
