#include <stdio.h>

int digitSum(int a)
{
    int sum = 0;

    while (a > 0)
    {
        sum = sum + a % 10;
        a = a / 10;
    }

    return sum;
}

int main()
{
    int n, a[100], i, j, count = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (digitSum(a[i]) == digitSum(a[j]))
            {
                count++;
            }
        }
    }

    printf("%d", count);

    return 0;
}
