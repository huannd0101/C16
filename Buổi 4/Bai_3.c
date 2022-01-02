#include <stdio.h>

int main()
{
    int n;

    do
    {
        printf("Chuong trinh se ket thuc neu nhap n la so am\n");
        printf("Nhap n = ");
        scanf("%d", &n);
    } while ( n >= 0 );
    
    return 0;
}