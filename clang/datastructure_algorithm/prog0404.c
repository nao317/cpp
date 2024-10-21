/* prog0404.c */

#include <stdio.h>

int r_pow(int a, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return a * r_pow(a, n - 1);
    }
}

int main(void)
{
    int p, x, y;

    scanf("%d%d", &x, &y);

    p = r_pow(x, y);
    printf("%d^%d=%d\n", x, y, p);

    return 0;
}