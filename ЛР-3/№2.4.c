#include <stdio.h>
#include <stdlib.h>

// Метка типа: либо число, либо символ
enum Type { INT, CHAR };

// Объединение — одно из двух значений
union Value {
    int i;
    char c;
};

// Структура с меткой и объединением
struct Tagged {
    enum Type type;
    union Value data;
};

int main() 
{
    int size = 2;
    struct Tagged* arr = malloc(size * sizeof(struct Tagged)); //выделение памяти

    // Заполняем
    arr[0].type = INT;
    arr[0].data.i = 100;

    arr[1].type = CHAR;
    arr[1].data.c = 'Z';

    // Выводим
    for (int i = 0; i < size; i++) 
    {
        if (arr[i].type == INT)
            printf("Элемент %d: число %d\n", i, arr[i].data.i);
        else
            printf("Элемент %d: символ %c\n", i, arr[i].data.c);
    }

    free(arr);
    return 0;
}