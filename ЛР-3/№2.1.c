#include <stdio.h>
#include <stdlib.h>

// Определяем объединение для хранения разных типов данных
union Data {
    int i;
    float f;
    char c;
}data;

int main() 
{
    // Объединение и указатель на него
    union Data *ptr = &data;

    // Инициализируем значение через указатель
    ptr->i = 42;
    printf("Целое число: %d\n", ptr->i);

    // Переопределяем значение — заменяем int на float
    ptr->f = 3.14;
    printf("Число с плавающей точкой: %f\n", ptr->f);

    // Ещё раз переопределяем значение — заменяем float на char
    ptr->c = 'A';
    printf("Символ: %c\n", ptr->c);

    // Печатаем содержимое объединения после последнего изменения
    printf("Содержимое объединения: %d (как int), %f (как float), %c (как char)\n", ptr->i, ptr->f, ptr->c);

    return 0;
}
