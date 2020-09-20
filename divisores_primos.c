#include <stdio.h>
#include <stdbool.h>

bool e_primo(int n)
{
  int count = 0;

  for (int i = 1; i <= n; i++)
    if (n % i == 0)
      count++;

  return count == 2;
}

int sumDiv(int x)
{
  int soma = 0;

  for (int i = 1; i <= x; i++)
  {
    if (e_primo(i))
    {
      soma += i;
    }
  }

  return soma;
}

int main()
{
  printf("%d\n", sumDiv(7));
}
