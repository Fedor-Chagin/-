#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n, k;

    printf("Введите размеры массива: ");
    scanf("%d%d", &n, &k);

    // Выделение памяти для массива указателей (строки)
    double **arr = malloc(n * sizeof(double *));
    // if (arr == NULL) 
    // {
    //     printf("Ошибка выделения памяти\n");
    //     return 1;
    // }

    // Выделение памяти для каждого столбца (выделяем строки)
    for (int i = 0; i < n; i++) 
    {
        arr[i] = malloc(k * sizeof(double));
        if (arr[i] == NULL) 
        {
            printf("Ошибка выделения памяти\n");

            // Освобождаем уже выделенную память перед выходом (в случае ошибки)
            for (int j = 0; j < i; j++) 
                free(arr[j]);
            free(arr);

            return 1;
        }
    }

    // Освобождение выделенной памяти
    for (int i = 0; i < n; i++) 
    {
        free(arr[i]);  // Освобождение каждой строки
    }
    free(arr);  // Освобождение массива указателей

    return 0;
}
