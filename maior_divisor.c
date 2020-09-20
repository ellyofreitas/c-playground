#include <stdio.h>

void sumFrac(int n, int* a, int* b) {
  printf("%d %d\n", *a, *b);
}

int main()
{

  int n;
  int a = 0, b = 0;

  scanf("%d", &n);

  sumFrac(n, &a, &b);}
