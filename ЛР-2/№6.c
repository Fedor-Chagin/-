#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int a = 1234567890;  // Исходное число
    char *p = (char *)&a;  // Преобразуем адрес a в указатель на char

    printf("Побайтовое представление числа %d:\n", a);
    for (int i = 0; i < sizeof(a); i++) 
    {
        printf("Байт %d: %02X\n", i, (unsigned char)p[i]); 
    }

    return 0;
}
