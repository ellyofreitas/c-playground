#include <stdio.h>
int main()
{
  int tam = 50, array[tam], count = 0, value;
  char c;
  do
  {
    scanf("%d%c", &value, &c);
    array[count] = value;
    count++;
  } while (c != '\n');

  for (int i = count - 1; i >= 0; i--)
  {
    printf("%d ", array[i]);
  }

  printf("\n");
}
