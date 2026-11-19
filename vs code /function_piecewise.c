#include <stdio.h>

int calculate(int x)
{
    if (x < 0)
    {
        return x * x + 2 * x + 1;
    }
    else if (x >= 0 && x < 10)
    {
        return 3 * x + 2;
    }
    else
    {
        return 5 * x - 7;
    }
}

int main()
{
    int x, y;

    scanf("%d", &x);

    y = calculate(x);

    printf("%d", y);

    return 0;
}
