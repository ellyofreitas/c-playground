#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int linha;
    int coluna;
    float *v;
} Matriz;

Matriz *cria(int m, int n)
{
    Matriz *mat = (Matriz *)malloc(sizeof(Matriz) * m * n);

    mat->linha = m;
    mat->coluna = n;

    mat->v = (float *)malloc(sizeof(float) * m * n);

    return mat;
}

void libera(Matriz *mat)
{
    free(mat->v);
    free(mat);
}

float acessa(Matriz *mat, int i, int j)
{
    int total = mat->linha + mat->coluna;
    int posicao = (i + j % total) + i * (mat->linha - 1);
    return mat->v[posicao];
}

void atribui(Matriz *mat, int i, int j, float x)
{
    if (mat->coluna < j || mat->linha < i)
        printf("erro");

    int total = mat->linha + mat->coluna;
    int posicao = (i + j % total) + i * (mat->linha - 1);
    mat->v[posicao] = x;
}

int linhas(Matriz *mat)
{
    return mat->linha;
}

int colunas(Matriz *mat)
{
    return mat->coluna;
}

void imprime(Matriz *mat)
{
    for (int i = 0; i < mat->linha; i++)
    {
        for (int j = 0; j < mat->coluna; j++)
        {
            int total = mat->linha + mat->coluna;
            int posicao = (i + j % total) + i * (mat->linha - 1);
            printf("%f ", mat->v[posicao]);
        }
        printf("\n");
    }
}

// int main()
// {
//     Matriz *mat = cria(3, 2);
//     printf("%d %d\n", mat->linha, mat->coluna);

//     float buff;
//     for (int i = 0; i < mat->linha; i++)
//     {
//         for (int j = 0; j < mat->coluna; j++)
//         {
//             scanf("%f", &buff);
//             atribui(mat, i, j, buff);
//         }
//     }
//     imprime(mat);
//     // printf("\n%f\n", acessa(mat, 0, 0));
// }