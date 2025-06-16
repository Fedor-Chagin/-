#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n;

    printf("Введите размер массива: ");
    scanf("%d", &n);

    double *arr = malloc(n * sizeof(double));   // Выделение памяти для массива
    // if (arr == NULL) 
    // {
    //     printf("Ошибка выделения памяти\n");
    //     return 1;
    // }

    // Заполнение массива значениями с клавиатуры
    printf("Введите %d чисел:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%lf", arr + i);  // Арифметика указателей
    }

    // Вывод элементов массива
    printf("Элементы массива:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%g ", *(arr + i));  // Арифметика указателей
    }
    printf("\n");

    // Освобождение выделенной памяти
    free(arr);

    return 0;
}
