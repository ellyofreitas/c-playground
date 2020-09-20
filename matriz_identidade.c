#include <stdio.h>

// void free_mat(int l, int **mat)
// {
//   for (int i = 0; i < l; i++)
//     free(mat[i]);
//   free(mat);
// }

void diag(int *mat, int l, int c)
{
  for (int i = 0; i < l; i++)
  {
    for (int j = 0; j < c; j++)
    {

    }
  }
}

void diag(int *mat, int l, int c)
{
  for (int i = 0; i < l; i++)
  {
    for (int j = 0; j < c; j++)
    {
      mat[i][j] = 1;
    }
  }
}

int main()
{
  int l = 3, c = 3, **mat;

  mat = (int **)malloc(sizeof(int *) * l);

  for (int i = 0; i < l; i++)
    mat[i] = (int *)malloc(sizeof(int) * c);

  fill_mat(l, c, mat);
}
