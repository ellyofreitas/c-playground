#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void fill_mat(int l, int c, int **mat)
{
  for (int i = 0; i < l; i++)
    for (int j = 0; j < c; j++)
      scanf("%d", &mat[i][j]);
}

void print_mat(int l, int c, int **mat)
{
  for (int i = 0; i < l; i++) {
    for (int j = 0; j < c; j++) {
      printf("%d ", mat[i][j]);
    }
    printf("\n");
  }
}

void print_mat_invert(int l, int c, int **mat)
{
  for (int i = l - 1; i >= 0; i--) {
    for (int j = c - 1; j >= 0; j--) {
      printf("%d ", mat[i][j]);
    }
    printf("\n");
  }
}

void free_mat(int l, int **mat)
{
  for (int i = 0; i < l; i++)
    free(mat[i]);
  free(mat);
}

int soldados_maiores(int l, int c, int **mat)
{
  int count = 0;
  for (int i = l - 1; i >= 0; i--)
  {
    for (int j = c - 1; j >= 0; j--)
      if (mat[i][j] < mat[i][j])
        count++;
  }
  return count;
}

int main()
{
  int l = 3, c = 3, **mat;

  mat = (int **)malloc(sizeof(int *) * l);

  for (int i = 0; i < l; i++)
    mat[i] = (int *)malloc(sizeof(int) * c);

  fill_mat(l, c, mat);
  // print_mat(l, c, mat);
  // printf("\n\n");
  // print_mat_invert(l, c, mat);
  printf("%d\n", soldados_maiores(l, c, mat));
  free_mat(l, mat);
}
