#include <stdio.h>

int gcd(int a, int b)
{
    int c;

    while (b != 0)
    {
        c = a % b;
        a = b;
        b = c;
    }

    return a;
}

int main()
{
    int a, b, c;

    scanf("%d %d", &a, &b);

    if (a < 0) a = -a;
    if (b < 0) b = -b;

    c = gcd(a, b);

    printf("%d", c);

    return 0;
}
