#include <stdio.h>

int main()
{
    int n, a, b, c, count = 0;

    scanf("%d", &n);

    for (a = 1; a <= n; a++)
    {
        for (b = a + 1; b <= n; b++)
        {
            for (c = b + 1; c <= n; c++)
            {
                if (a*a + b*b == c*c)
                {
                    printf("%d %d %d\n", a, b, c);
                    count++;
                }
            }
        }
    }

    if (count == 0)
    {
        printf("None");
    }

    return 0;
}
