#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    // Создаём строку с разными символами (10-20 символов)
    char test_str[] = "Ab1 2Cd.Ef!gH?iJ";

    printf("Анализ строки: \"%s\"\n", test_str);
    printf("Длина строки: %zu символов\n\n", strlen(test_str));
    
    // Организуем цикл по каждому символу
    for(int i = 0; test_str[i] != '\0'; i++) 
    {
        printf("Символ '%c' (код %d):\n", test_str[i], test_str[i]);
        
        if(isalpha(test_str[i])) {
            if(islower(test_str[i])) 
            {
                printf("  - Маленькая латинская буква\n");
            } 
            else 
            {
                printf("  - Большая латинская буква\n");
            }
        }
        else if(isdigit(test_str[i])) 
        {
            printf("  - Цифра\n");
        }
        else if(isspace(test_str[i])) 
        {
            printf("  - Пробельный символ\n");
        }
        else if(ispunct(test_str[i])) 
        {
            printf("  - Знак пунктуации\n");
        }
        else 
        {
            printf("  - Другой символ\n");
        }
        
        printf("\n");
    }
    
    return 0;
}
