#include <stdio.h>

int main()
{
    int num1, num2, num3, best = 0;
    printf("Input three integers : ");
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 > best)
    {
        best = num1;
    }
    if (num2 > best)
    {
        best = num2;
    }
    if (num3 > best)
    {
        best = num3;
    }
    printf("The maximum number is %d", best);
    return 0;
}