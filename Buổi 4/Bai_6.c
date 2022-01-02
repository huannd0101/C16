#include <stdio.h>

int main()
{
    int n, i;
    do
    {
        printf("Nhap so nguyen n thoa man 2<=n<=9: ");
        scanf("%d", &n);
    } while (n < 2 || n > 9);

    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n*i);
    }

    return 0;
}