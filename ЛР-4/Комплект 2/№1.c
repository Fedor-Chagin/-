#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

#define MY_SIZE 20 // С запасом для 10 символов

int main() {
    setlocale(LC_ALL, "en_US.ISO88591");
    
    // 1. Ввод строки
    char my_string[MY_SIZE];
    printf("Введите строку (до 10 латинских символов): ");
    fgets(my_string, MY_SIZE, stdin);
    my_string[strcspn(my_string, "\n")] = '\0'; // Удаляем \n
    
    // 2.1 Длина строки через цикл for
    int length = 0;
    for (; my_string[length] != '\0'; length++);
    printf("1. Длина через for: %d\n", length);
    
    // 2.2 Длина через указатель
    const char *ptr = my_string;
    while (*ptr++) {}; // Идем до \0
    printf("2. Длина через указатель: %ld\n", ptr - my_string - 1);
    
    // 3. Длина через strlen
    printf("3. Длина через strlen: %zu\n", strlen(my_string));
    
    // 4. Копирование строки
    char second_string[MY_SIZE];
    strcpy(second_string, my_string);
    printf("4. Скопированная строка: %s\n", second_string);
    
    // 5. Конкатенация строк
    char str1[30] = "Hello";
    char str2[] = "World";
    strcat(str1, str2);
    printf("5. Конкатенация: %s\n", str1);
    
    // 6. Сравнение строк
    char str3[] = "pervaya";
    char str4[] = "Vtoraya";
    int cmp = strcmp(str3, str4);
    printf("6. Сравнение '%s' и '%s': %d\n", str3, str4, cmp);
    
    // 7. Регистр символов
    char mixed_case[] = "AbCdEfGh";
    printf("7. Исходная строка: %s\n", mixed_case);
    
    // В нижний регистр
    for (int i = 0; mixed_case[i]; i++) 
    {
        mixed_case[i] = tolower(mixed_case[i]);
    }
    printf("   В нижнем регистре: %s\n", mixed_case);
    
    // В верхний регистр
    for (int i = 0; mixed_case[i]; i++) 
    {
        mixed_case[i] = toupper(mixed_case[i]);
    }
    printf("   В верхнем регистре: %s\n", mixed_case);
    
    return 0;
}
