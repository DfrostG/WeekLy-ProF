#include <stdio.h>

int main()
{
    int x, y, z;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);
    if (x == y && x == z)
    {
        printf("%d is the maximum number.", x);
    }
    else if (x >= y && x >= z)
    {
        printf("%d is the maximum number.", x);
    }
    else if (y >= x && y >= z)
    {
        printf("%d is the maximum number.", y);
    }
    else if (z >= x && z >= y)
    {
        printf("%d is the maximum number.", z);
    }
    return 0;
}