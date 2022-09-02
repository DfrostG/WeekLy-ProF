#include <stdio.h>

int main()
{
    int i, j, k, n, x;
    printf("Enter number : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("*");
    }
    printf("\n");
    for (j = 0; j < n-2; j++)
    {
        for (x = 0; x < n; x++)
        {
            if (x == 0 || x == n - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for (k = 0; k < n; k++)
    {
        printf("*");
    }
    return 0;
}