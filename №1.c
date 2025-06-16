#include <stdio.h>
#include <stdlib.h>
int main()
{
    double ***pointer = NULL;

    *(*(*(pointer= (double***) malloc(sizeof(double**)))= (double**)malloc(sizeof(double*)))= (double*)malloc(sizeof(double)))= 2.0;

     printf("%lf\n", ***pointer);
     free(**pointer);
     free(*pointer);
     free(pointer);
    return 0;
}





// int main() {
//     double ***pointer = NULL;  // 1. Создаём тройной указатель и инициализируем NULL

//     // 2. Выделение памяти для double**
//     pointer = malloc(sizeof(double));

//     // 3. Выделение памяти для double*
//     *pointer = malloc(sizeof(double));

//     // 4. Выделение памяти для double
//     **pointer = malloc(sizeof(double));

//     // 5. Присваиваем значение 2.0
//     ***pointer = 2.0;

//     // 6. Вывод результата
//     printf("Значение: %lf\n", ***pointer);

//     // 7. Освобождение памяти
//     free(**pointer);
//     free(*pointer);
//     free(pointer);

//     return 0;
// }
