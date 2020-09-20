#include <stdio.h>

int main()
{
    int linha = 5;
    int coluna = 5;
    int total = linha + coluna;
    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            int posicao = (i + j % total) + i * (linha - 1);
            printf("%d ", posicao);
        }
        printf("\n");
    }
}