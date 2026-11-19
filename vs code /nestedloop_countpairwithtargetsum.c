#include <stdio.h>

int main()
{
    int n, target, a[100], i, j, count = 0;

    scanf("%d %d", &n, &target);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == target)
            {
                count++;
            }
        }
    }

    printf("%d", count);

    return 0;
}
