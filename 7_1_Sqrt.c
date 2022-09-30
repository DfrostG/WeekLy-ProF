#include <stdio.h>

double countDigits(int n)
{
  int d = 0;
  while (n != 0)
  {
    n = n / 10;
    d++;
  }
  return d;
}

int main()
{
  int n;
  printf("Enter number : ");
  scanf("%d", &n);
  double first = countDigits(n), second = 0;

  second = first * 100;
  if (n > 0)
  {
    while (first != second)
    {
      first = 0.5 * (second + (n / second));
      second = 0.5 * (first + (n / first));  
    }
    printf("%lf", first);
  }
  else
  {
    printf("Error!!");
  }
  
  return 0;
}