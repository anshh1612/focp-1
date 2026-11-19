#include <stdio.h>

int main()
{
    char a[100];
    int i, count = 1;

    scanf("%s", a);

    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == a[i + 1])
        {
            count++;
        }
        else
        {
            printf("%c%d", a[i], count);
            count = 1;
        }
    }

    return 0;
}
