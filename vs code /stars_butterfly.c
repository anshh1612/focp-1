#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int a = (n + 1) / 2;

    for (int i = 1; i <= n; i++) {
        int b;

        if (i <= a)
            b = i;
        else
            b = n - i + 1;

        int c = 2 * (a - b) + 1;

        for (int j = 1; j <= b; j++)
            printf("*");

        for (int j = 1; j <= c; j++)
            printf(" ");

        for (int j = 1; j <= b; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}
