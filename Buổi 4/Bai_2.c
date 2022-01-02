#include <stdio.h>

int main()
{
    int i;
    for ( i = 0; i < 100; i++)
    {
        printf("%d ", i);    // In ra so do va dau cach

        // Neu so do <= 9 thi in them mot dau cach
        if ( i <= 9 )
        {
            printf(" ");
        }

        // Neu so do co hang chuc la so 9 thi xuong dong
        if ( i % 10 == 9 )
        {
            printf("\n");
        }
        
    }
    
    return 0;
}