#include <stdio.h>

int main()
{
  int n;
  double first = 0, second;
  printf("Enter number : ");
  scanf("%d", &n);

  second = n / 2;
  if (n >= 0)
  {
    while (second != first)
    {
      first = second;
      second = (n / first + first) / 2;
    }
    if (second == 0)
    {
      printf("1.000000");
    }
    else
    {
      printf("%lf", second);
    }
  }
  else
  {
    printf("Error!!");
  }

  return 0;
}