#include <stdio.h>

int main()
{
    int a[10][10], n, i, j, check = 1;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] != a[j][i])
            {
                check = 0;
                break;
            }
        }
    }

    if (check == 1)
        printf("YES");
    else
        printf("NO");

    return 0;
}
