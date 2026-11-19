#include <stdio.h>

int square(int a)
{
    int i;

    if (a < 0)
        return 0;

    for (i = 0; (long long)i * i <= a; i++)
    {
        if (i * (long long)i == a)
            return 1;
    }

    return 0;
}

int main()
{
    int a, b;

    scanf("%d", &a);

    b = square(a);

    printf("%d", b);

    return 0;
}
