
## Комплект 1

### №1
2. Поставленная задача:  
   : Создайте две функции, которые вычисляют факториал числа:
• функцию, которая вычисляет факториал, используя цикл;
• функцию, которая вычисляет факториал, используя рекурсивный вызов самой себя.
Продемонстрируйте работу обеих функций.

3. Математическая модель:     -

4. Список идентификаторов:

| Имя | Тип | Смысл |
|---|---|---|
| n | int | Число для вычисления факториала |
| s | float | Вспомогательная переменная |
| i | int | Счетчик цикла |

5. Код программы:

```c
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int n;
float s;
int fact(int n)
{
    s=n;
    n=1;
    for (int i=1; i<=s; i++)
    {
        n=n*i;
    }
    return n;
}

int factorial_rec(int n) {
    if (n <= 1) return 1;           
    return n * factorial_rec(n - 1); 
}

int main ()
{
n=9;
n=fact(n);
printf("%d\t", n);
n=9;
n=factorial_rec(n);
printf("%d", n);
return 0;
}
```

6. Результат выполненной работы:  
362880  362880    

---

### №2

2. Поставленная задача:  
   Объявите указатель на массив типа int и динамически выделите память для 12-ти элементов. Напишите функцию, которая поменяет значения чётных и нечётных ячеек массива

3. Математическая модель:   -

4. Список идентификаторов:

| Имя | Тип | Смысл |
|---|---|---|
| quantity | int | Количество элементов массива |
| i | int | Счетчик цикла |
| n | int | Временная переменная для обмена |
| M | int | Указатель на массив |
| a | int | Вспомогательный указатель |

5. Код программы:

```c
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int quantity= 12;
int i;
int n;

void replacement(int *M, int size)
{
    for (int i=0; i<quantity-1; i+=2)
        {
            n=M[i];
            M[i]=M[i+1];
            M[i+1]=n;
        }
}

int main()
{
int *M = (int*) malloc(quantity * sizeof(int));
int *a = M;
    printf("введите элементы массива");
    for (int i=0; i<=quantity-1; i++)
        {
            scanf("%d", &M[i]);
        }
        replacement(M, quantity);
    for (int i=0; i<=quantity-1; i++)
        {
            printf("%d\t", M[i]);
        }
    free(M);
    return 0;
}
```

6. Результат выполненной работы:  
введите элементы массива0 1 2 3 4 5 6 7 8 9 10 11   
1       0       3       2       5       4       7       6       9       8       11      10      

---

### №3
2. Поставленная задача:  
Создать две основные функции:
• функцию для динамического выделения памяти под двумерный динамический массив типа double — матрицу;
• функцию для динамического освобождения памяти под двумерный динамический массив типа double — матрицу. Создать две вспомогательные функции:
• функцию для заполнения матрицы типа double;
• функцию для распечатки этой матрицы на экране.
Продемонстрировать работу всех этих функций в своей программе.

3. Математическая модель:  -

4. Список идентификаторов:

| Имя | Тип | Смысл |
|---|---|---|
| lines | #define | Количество строк матрицы |
| columns | #define | Количество столбцов матрицы |
| m | double | Указатель на матрицу |
| i, j | int | Счетчики циклов |
| rows, cols | int | Параметры функций |

5. Код программы:

```c
#include <stdio.h>
#include <stdlib.h>

#define lines 3
#define columns 4

double **allocation(int rows, int cols) {
    double **m = malloc(rows * sizeof(double*));
    for (int i = 0; i < rows; i++)
    {
        m[i] = malloc(cols * sizeof(double));
    }
    return m;
}

void freeing(double **m, int rows) {
    for (int i = 0; i < rows; i++) 
    {
        free(m[i]);
    }
    free(m);
}

void fill(double **m, int rows, int cols) {
    printf("Введите элементы матрицы:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%lf", &m[i][j]);
}

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
```

6. Результат выполненной работы:  
Введите элементы матрицы:
0 1 2 3 
4 5 6 7  
8 9 10 11
Матрица:
0.00    1.00    2.00    3.00
4.00    5.00    6.00    7.00
8.00    9.00    10.00   11.00

---

### №4

2. Поставленная задача:  
   Создать функцию, которая вычисляет векторное произведение двух векторов в декартовых координатах, используя указатели на соответствующие массивы.

3. Математическая модель:  -

4. Список идентификаторов:

| Имя | Тип | Смысл |
|---|---|---|
| a, b | double | Входные векторы |
| result | double | Результат векторного произведения |

5. Код программы:

```c
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void vector_proizv(const double *a, const double *b, double *result) {
    result[0] = a[1] * b[2] - a[2] * b[1];  // x-компонента
    result[1] = a[2] * b[0] - a[0] * b[2];  // y-компонента
    result[2] = a[0] * b[1] - a[1] * b[0];  // z-компонента
}

int main() 
{
    double vec1[3] = {1.0, 2.0, 3.0};
    double vec2[3] = {4.0, 5.0, 6.0};
    double product[3];
    
    vector_proizv(vec1, vec2, product);
    
    printf("Векторное произведение: [%.2f, %.2f, %.2f]\n", product[0], product[1], product[2]);
    
    return 0;
}
```

6. Результат выполненной работы:  
   Векторное произведение: [-3.00, 6.00, -3.00]

---

## Комплект 2

### №1

2. Поставленная задача:  
  Создайте новую программу, где с клавиатуры вводится строка некоторой длины порядка 10 латинских символов (не используйте кириллицу) в классическую строку языка C, которая имеет вид массива
char my_string[MY_SIZE]. MY_SIZE определите с помощью директивы #define. Значение MY_SIZE должно превышать длину вводимой
строки с некоторым разумным запасом. Другие строки в этой задаче
можете создавать либо также как статические массивы, либо как динамические массивы, но не забывайте освобождать от динамически
выделенную память с помощью функции
void free(void∗ ptr); .
Выполните следующие действия и распечатайте результаты:
1. Вычислите длину строки my_string, используя цикл for и тот
факт, что в языкеC такие строки имеют в конце специальный нулевой символ конца строки, представленный escape-последовательностью
'\0' ('...' — это тип char).
2. Сделайте тоже самое, что в пункте 1, но создайте указатель на
начало вашей строки и используйте операцию инкремента ++.
3. Используйте функции
size_t strlen(const char∗ str); или
3
size_t strnlen (const char ∗string, size_t maxlen); или
size_t strnlen_s(const char ∗str, size_t strsz); для получения размера строки в виде значения size_t (псевдоним
unsigned int, спецификатор форматирования —"%zu"). Убедитесь, что ваш компилятор явно работает с опцией-std=c11 или с
опцией для более позднего стандарта языка для поддержки функции strnlen_s.

3. Математическая модель:  -

4. Список идентификаторов:

| Имя | Тип | Смысл |
|---|---|---|
| MY_SIZE | #define | Максимальный размер строки |
| my_string | char | Входная строка |
| second_string | char | Копия строки |
| str1, str2 | char | Строки для конкатенации |
| str3, str4 | char | Строки для сравнения |
| mixed_case | char | Строка для изменения регистра |
| length | int | Длина строки |
| ptr | char | Указатель для подсчета длины |
| cmp | int | Результат сравнения строк |

5. Код программы:

```c
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

#define MY_SIZE 20

int main() {
    setlocale(LC_ALL, "en_US.ISO88591");
    
    char my_string[MY_SIZE];
    printf("Введите строку (до 10 латинских символов): ");
    fgets(my_string, MY_SIZE, stdin);
    my_string[strcspn(my_string, "\n")] = '\0';
    
    int length = 0;
    for (; my_string[length] != '\0'; length++);
    printf("1. Длина через for: %d\n", length);
    
    const char *ptr = my_string;
    while (*ptr++) {};
    printf("2. Длина через указатель: %ld\n", ptr - my_string - 1);
    
    printf("3. Длина через strlen: %zu\n", strlen(my_string));
    
    char second_string[MY_SIZE];
    strcpy(second_string, my_string);
    printf("4. Скопированная строка: %s\n", second_string);
    
    char str1[30] = "Hello";
    char str2[] = "World";
    strcat(str1, str2);
    printf("5. Конкатенация: %s\n", str1);
    
    char str3[] = "pervaya";
    char str4[] = "Vtoraya";
    int cmp = strcmp(str3, str4);
    printf("6. Сравнение '%s' и '%s': %d\n", str3, str4, cmp);
    
    char mixed_case[] = "AbCdEfGh";
    printf("7. Исходная строка: %s\n", mixed_case);
    
    for (int i = 0; mixed_case[i]; i++) 
    {
        mixed_case[i] = tolower(mixed_case[i]);
    }
    printf("   В нижнем регистре: %s\n", mixed_case);
    
    for (int i = 0; mixed_case[i]; i++) 
    {
        mixed_case[i] = toupper(mixed_case[i]);
    }
    printf("   В верхнем регистре: %s\n", mixed_case);
    
    return 0;
}
```

6. Результат выполненной работы:  
Введите строку (до 10 латинских символов): sgfyrhkgpv     
1. Длина через for: 10
2. Длина через указатель: 10
3. Длина через strlen: 10
4. Скопированная строка: sgfyrhkgpv
5. Конкатенация: HelloWorld
6. Сравнение 'pervaya' и 'Vtoraya': 26
7. Исходная строка: AbCdEfGh
   В нижнем регистре: abcdefgh
   В верхнем регистре: ABCDEFGH

---

### №2

2. Поставленная задача:  
Конвертируйте введённые заданные как строки: число с плавающей точкой (double) и целое число (int) в значения типаdouble и int, используя функциями atof и atoi.

3. Математическая модель:  
   -

4. Список идентификаторов:

| Имя | Тип | Смысл |
|---|---|---|
| MY_SIZE | #define | Максимальный размер строки |
| int_str | char[] | Строка с целым числом |
| double_str | char[] | Строка с дробным числом |
| int_num | int | Конвертированное целое число |
| double_num | double | Конвертированное дробное число |

5. Код программы:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define MY_SIZE 20

int main() {
    setlocale(LC_ALL, "en_US.ISO88591");
    
    char int_str[MY_SIZE];
    printf("Введите целое число (int): ");
    fgets(int_str, MY_SIZE, stdin);
    int_str[strcspn(int_str, "\n")] = '\0';
    
    char double_str[MY_SIZE];
    printf("Введите число с плавающей точкой (double): ");
    fgets(double_str, MY_SIZE, stdin);
    double_str[strcspn(double_str, "\n")] = '\0';
    
    int int_num = atoi(int_str);
    printf("Конвертированное int: %d\n", int_num);
    
    double double_num = atof(double_str);
    printf("Конвертированное double: %f\n", double_num);
    
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
```

6. Результат выполненной работы:  
   Введите целое число (int): 5
Введите число с плавающей точкой (double): 5.6
Конвертированное int: 5
Конвертированное double: 5.600000

---

### №3

2. Поставленная задача:  
Создайте строку от 10 до 20 символов, используя только цифры, латинский буквы в разных регистрах пробельные символы и символы пунктуации. Организуйте цикл, где каждый символ подробно тестируется функциями типа int is∗(/∗... ∗/) (например — isdigit, ispunct). См. документацию по ссылке https://en.cppreference.com/w/c/string/byte. Оформите распечатку информации по каждому символу в виде списка на экране, чтобы можно было прочесть информацию о том что представляет из себя каждый символ (своими словами, в свободной форме). Постарайтесь
использовать только латиницу.

3. Математическая модель:    -

4. Список идентификаторов:

| Имя | Тип | Смысл |
|---|---|---|
| test_str | char[] | Тестовая строка для анализа |
| i | int | Параметр цикла |

5. Код программы:

```c
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char test_str[] = "Ab1 2Cd.Ef!gH?iJ";

    printf("Анализ строки: \"%s\"\n", test_str);
    printf("Длина строки: %zu символов\n\n", strlen(test_str));
    
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
```

6. Результат выполненной работы:  
Анализ строки: "Ab1 2Cd.Ef!gH?iJ"
Длина строки: 16 символов

Символ 'A' (код 65):
  - Большая латинская буква

Символ 'b' (код 98):
  - Маленькая латинская буква

Символ '1' (код 49):
  - Цифра

Символ ' ' (код 32):
  - Пробельный символ

Символ '2' (код 50):
  - Цифра

Символ 'C' (код 67):
  - Большая латинская буква

Символ 'd' (код 100):
  - Маленькая латинская буква

Символ '.' (код 46):
  - Знак пунктуации

Символ 'E' (код 69):
  - Большая латинская буква

Символ 'f' (код 102):
  - Маленькая латинская буква

Символ '!' (код 33):
  - Знак пунктуации

Символ 'g' (код 103):
  - Маленькая латинская буква

Символ 'H' (код 72):
  - Большая латинская буква

Символ '?' (код 63):
  - Знак пунктуации

Символ 'i' (код 105):
  - Маленькая латинская буква

Символ 'J' (код 74):
  - Большая латинская буква
