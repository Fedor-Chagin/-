#include <stdio.h>
#include <stdlib.h> // Для atoi и atof
#include <string.h>
#include <locale.h>

#define MY_SIZE 20

int main() {
    setlocale(LC_ALL, "en_US.ISO88591");
    
    // 1. Ввод строки с числом int
    char int_str[MY_SIZE];
    printf("Введите целое число (int): ");
    fgets(int_str, MY_SIZE, stdin);
    int_str[strcspn(int_str, "\n")] = '\0'; // Удаляем \n
    
    // 2. Ввод строки с числом double
    char double_str[MY_SIZE];
    printf("Введите число с плавающей точкой (double): ");
    fgets(double_str, MY_SIZE, stdin);
    double_str[strcspn(double_str, "\n")] = '\0';
    
    // 3. Конвертация в int с помощью atoi
    int int_num = atoi(int_str);
    printf("Конвертированное int: %d\n", int_num);
    
    // 4. Конвертация в double с помощью atof
    double double_num = atof(double_str);
    printf("Конвертированное double: %f\n", double_num);
    
    // 5. Проверка на ошибки конвертации
    if (int_num == 0 && int_str[0] != '0') 
    {
        printf("Ошибка конвертации int!\n");
    }
    
    if (double_num == 0.0 && double_str[0] != '0') 
    {
        printf("Ошибка конвертации double!\n");
    }
    
    return 0;
}
