#include <stdio.h>

int main()
{
    int i, m, n;
    i = m = n = 100;
    
    printf("- for loop:\n");
    for (i = 100; i >= 1; i--)
    {
        printf("%d ", i);
    }

    printf("\n- while loop:\n");
    while (n >= 1)
    {
        printf("%d ", n);
        n--;
    }

    printf("\n- do while loop:\n");
    do
    {
        printf("%d ", m);
        m--;
    } while (m >= 1);

    return 0;
}