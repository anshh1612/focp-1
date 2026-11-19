#include <stdio.h>

int main()
{
    char a[200];
    int i, v = 0, c = 0, d = 0, s = 0;

    fgets(a, 200, stdin);

    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' ||
            a[i] == 'o' || a[i] == 'u' || a[i] == 'A' ||
            a[i] == 'E' || a[i] == 'I' || a[i] == 'O' ||
            a[i] == 'U')
            v++;

        else if ((a[i] >= 'a' && a[i] <= 'z') ||
                 (a[i] >= 'A' && a[i] <= 'Z'))
            c++;

        else if (a[i] >= '0' && a[i] <= '9')
            d++;

        else if (a[i] == ' ')
            s++;
    }

    printf("%d %d %d %d", v, c, d, s);

    return 0;
}
