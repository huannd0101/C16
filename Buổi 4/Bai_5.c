#include <stdio.h>

int main()
{
    int n, i, a, b, c;
    do
    {
        printf("Nhap so tu nhien n thoa man 0<=n<=100: ");
        scanf("%d", &n);
    } while (n < 0 || n > 100);

    if (n == 0)
    {
        a = 0, b = 0, c = 1;
    }
    else
    {
        a = 0, b = 1, c = 1;
        for (i = 1; i <= n; i++)
        {
            a += i;
            b += 2 * i;
            c += 2 * i + 1;
        }
    }

    printf("A = %d\n", a);
    printf("B = %d\n", b);
    printf("C = %d\n", c);

    return 0;
}