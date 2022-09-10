#include <stdio.h>

int factorial(int num)
{
  if (num == 0)
  {
    return 1;
  }
  else
  {
  return num * factorial(num - 1);
  }
}

int main()
{
  int n;
  printf("Input positive integer : ");
  scanf("%d", &n);
  printf("%d", factorial(n));
  return 0;
}