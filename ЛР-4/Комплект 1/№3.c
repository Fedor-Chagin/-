#include <stdio.h>
#include <stdlib.h>

#define lines 3
#define columns 4

// Выделение памяти под матрицу
double **allocation(int rows, int cols) {
    double **m = malloc(rows * sizeof(double*));
    for (int i = 0; i < rows; i++)
    {
        m[i] = malloc(cols * sizeof(double));
    }
    return m;
}

// Освобождение памяти
void freeing(double **m, int rows) {
    for (int i = 0; i < rows; i++) 
    {
        free(m[i]);
    }
    free(m);
}

// Ввод матрицы
void fill(double **m, int rows, int cols) {
    printf("Введите элементы матрицы:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%lf", &m[i][j]);
}

// Печать матрицы
void print(double **m, int rows, int cols) {
    printf("Матрица:\n");
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++)
            printf("%.2lf\t", m[i][j]);
        printf("\n");
    }
}

int main() 
{
    double **matrix = allocation(lines, columns);
    fill(matrix, lines, columns);
    print(matrix, lines, columns);
    freeing(matrix, lines);
    return 0;
}
