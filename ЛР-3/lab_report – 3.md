## №1.1

2. Поставленная задача:  
   Создать некоторую структуру с указателем на некоторую функцию в качестве поля. Вызвать эту функцию через имя переменной этой структуры и поле указателя на функцию.

3. Математическая модель:     -

4. Список идентификаторов:

| Имя          | Тип         | Смысл                     |
|--------------|-------------|---------------------------|
| `x`          | `int`       | Глобальная переменная     |
| `nekotoraya_fn` | `function` | Функция, возводящая в квадрат |
| `p`          | `struct`    | Структура с указателем на функцию |
| `a`          | `int` | Указатель на функцию в структуре |

5. Код программы:

```c
#include <stdio.h>
#include <stdlib.h>

int x=9;

int nekotoraya_fn(int x)
{
x=x*x;
return x;
}

struct nekotoraya
{
    int (*a)(int);
}p;

int main() 
{
    p.a=nekotoraya_fn;
    x=p.a(x);
    printf("%d", x);
    return 0;
}
```

6. Результат выполненной работы:  
   81

---

## №1.2

2. Поставленная задача:  
Создать структуру для вектора в 3-х мерном пространстве. Реализовать и использховать в своей программе следующие операции над
векторами:
• скалярное умножение векторов;
• векторное произведение;
• модуль вектора;
• распечатка вектора в консоли.
В структуре вектора указать имя вектора в качестве отдельного поля
этой структуры.

3. Математическая модель:  -

4. Список идентификаторов:

| Имя          | Тип         | Смысл                     |
|--------------|-------------|---------------------------|
| `a`          | `struct`    | Первый вектор             |
| `b`          | `struct`    | Второй вектор             |
| `skal_proizv`| `double`    | Скалярное произведение    |
| `cross_x`    | `double`    | Компонента X векторного произведения |
| `cross_y`    | `double`    | Компонента Y векторного произведения |
| `cross_z`    | `double`    | Компонента Z векторного произведения |
| `modul_vectora_a` | `double` | Модуль вектора a         |
| `modul_vectora_b` | `double` | Модуль вектора b         |

5. Код программы:

```c
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct dlya_vectora_1
{
    char name;
    double x, y, z;
}a;

struct dlya_vectora_2
{
    char name;
    double x, y, z;
}b;

int main() 
{   
    a.name = 'a';
    a.x=12;
    a.y=15.6;
    a.z=9.6;
    
    b.name = 'b';
    b.x=0.1;
    b.y=1;
    b.z=4.13;
    double skal_proizv=a.x * b.x + a.y * b.x + a.y * b.z;
    double cross_x = a.y * b.z - a.z * b.y;
    double cross_y = a.z * b.x - a.x * b.z;
    double cross_z = a.x * b.y - a.y * b.x;
    double modul_vectora_a=pow((a.x * a.x + a.y * a.y + a.z * a.z), 0.5);
    double modul_vectora_b=pow((b.x * b.x + b.y * b.y + b.z * b.z), 0.5);

    printf("Вектор %c: (%.2f, %.2f, %.2f)\n", a.name, a.x, a.y, a.z);
    printf("Вектор %c: (%.2f, %.2f, %.2f)\n", b.name, b.x, b.y, b.z);
    printf("Скалярное произведение: %.2f\n", skal_proizv);
    printf("Векторное произведение: (%.2f, %.2f, %.2f)\n", cross_x, cross_y, cross_z);
    printf("Модуль вектора %c: %.2f\n", a.name, modul_vectora_a);
    printf("Модуль вектора %c: %.2f\n", b.name, modul_vectora_b);
    return 0;
}
```

6. Результат выполненной работы:  
Вектор a: (12.00, 15.60, 9.60)
Вектор b: (0.10, 1.00, 4.13)
Скалярное произведение: 67.19
Векторное произведение: (54.83, -48.60, 10.44)
Модуль вектора a: 21.90
Модуль вектора b: 4.25

---

## №1.3

2. Поставленная задача:  
Вычислить, используя структуру комплексного числа, комплексную экспоненту exp(z) некоторого z ∈ C:

3. Математическая модель:  
$$
e^z = 1 + z + \frac{z^2}{2!} + \frac{z^3}{3!} + \dots + \frac{z^n}{n!}
$$

4. Список идентификаторов:

| Имя          | Тип         | Смысл                     |
|--------------|-------------|---------------------------|
| `real_part`  | `double`    | Действительная часть комплексного числа |
| `imag_part`  | `double`    | Мнимая часть комплексного числа |
| `terms`      | `int`       | Количество членов ряда    |
| `exp_real`   | `double`    | Действительная часть результата |
| `exp_imag`   | `double`    | Мнимая часть результата   |
| `factorial`  | `function`  | Функция вычисления факториала |
| `power_real` | `double`    | Действительная часть степени |
| `power_imag` | `double`    | Мнимая часть степени      |

5. Код программы:

```c
#include <stdio.h>
#include <math.h>

int factorial(int n) {
    if (n == 0) return 1;
    int result = 1;
    for (int i = 1; i <= n; i++) 
    {
        result *= i;
    }
    return result;
}

int main() {
    double real_part, imag_part;
    int terms;
    
    printf("Введите действительную часть комплексного числа: ");
    scanf("%lf", &real_part);
    printf("Введите мнимую часть комплексного числа: ");
    scanf("%lf", &imag_part);
    printf("Введите количество членов ряда (n): ");
    scanf("%d", &terms);
    
    double exp_real = 0.0;
    double exp_imag = 0.0;
    
    for (int i = 0; i <= terms; i++) 
    {
        int fact = factorial(i);
        double power_real = 1.0;
        double power_imag = 0.0;
        
        for (int j = 0; j < i; j++) 
        {
            double new_real = power_real * real_part - power_imag * imag_part;
            double new_imag = power_real * imag_part + power_imag * real_part;
            power_real = new_real;
            power_imag = new_imag;
        }
        
        exp_real += power_real / fact;
        exp_imag += power_imag / fact;
    }
    
    printf("exp(z) = %g + %gi\n", exp_real, exp_imag);
    return 0;
}
```

6. Результат выполненной работы:  
Введите действительную часть комплексного числа: 3
Введите мнимую часть комплексного числа: 1
Введите количество членов ряда (n): 9
exp(z) = 10.8889 + 16.9085i

---

## №1.4

2. Поставленная задача:  
Используя так называемые "битовые" поля в структуре C, создать экономную структуру в оперативной памяти для заполнения даты некоторого события, например даты рождения человека.

3. Математическая модель:  -

4. Список идентификаторов:

| Имя          | Тип         | Смысл                     |
|--------------|-------------|---------------------------|
| `birthday`   | `struct`    | Структура для хранения даты |
| `day`        | `unsigned int` | День (5 бит)            |
| `month`      | `unsigned int` | Месяц (4 бита)          |
| `year`       | `unsigned int` | Год (12 бит)            |

5. Код программы:

```c
#include <stdio.h>
#include <stdlib.h>

struct Date 
{
    unsigned int day   : 5;
    unsigned int month : 4;
    unsigned int year  : 12;
}birthday;

int main() 
{
    birthday.day = 24;
    birthday.month = 04;
    birthday.year = 2005;

    printf("Дата рождения: %02u.%02u.%04u\n", birthday.day, birthday.month, birthday.year);

    return 0;
}
```

6. Результат выполненной работы:  
Дата рождения: 24.04.2005

---

## №1.5

2. Поставленная задача:  
Реализовать в виде структур двунаправленный связный список и совершить отдельно его обход в прямом и обратном направлениях с распечаткой значений каждого элемента списка. 

3. Математическая модель:  -

4. Список идентификаторов:

| Имя          | Тип         | Смысл                     |
|--------------|-------------|---------------------------|
| `Node`       | `struct`    | Структура узла списка     |
| `data`       | `int`       | Значение узла             |
| `next`       | `Node*`     | Указатель на следующий узел |
| `prev`       | `Node*`     | Указатель на предыдущий узел |
| `node1`      | `Node*`     | Первый узел               |
| `node2`      | `Node*`     | Второй узел               |
| `node3`      | `Node*`     | Третий узел               |

5. Код программы:

```c
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

int main() 
{
    struct Node* node1 = malloc(sizeof(struct Node));
    struct Node* node2 = malloc(sizeof(struct Node));
    struct Node* node3 = malloc(sizeof(struct Node));

    if (!node1 || !node2 || !node3) 
    {
        printf("Ошибка выделения памяти\n");
        return 1;
    }

    node1->data = 10;
    node2->data = 20;
    node3->data = 30;

    node1->next = node2; 
    node2->next = node3;
    node3->next = NULL;

    node3->prev = node2; 
    node2->prev = node1;
    node1->prev = NULL;

    printf("Прямой обход:\n");
    for (struct Node* current = node1; current != NULL; current = current->next) 
    {
        printf("%d ", current->data);
    }

    printf("\nОбратный обход:\n");
    for (struct Node* current = node3; current != NULL; current = current->prev) 
    {
        printf("%d ", current->data);
    }

    free(node1);
    free(node2);
    free(node3);

    return 0;
}
```

6. Результат выполненной работы:  
Прямой обход:
10 20 30 
Обратный обход:
30 20 10    

---

## №2.1

2. Поставленная задача:  
Напишите программу, которая использует указатель на некоторое объединение union.

3. Математическая модель:   -

4. Список идентификаторов:

| Имя          | Тип         | Смысл                     |
|--------------|-------------|---------------------------|
| `data`       | `union`     | Объединение для хранения разных типов данных |
| `i`          | `int`       | Целое число               |
| `f`          | `float`     | Число с плавающей точкой  |
| `c`          | `char`      | Символ                    |
| `ptr`        | `Data*`     | Указатель на объединение  |

5. Код программы:

```c
#include <stdio.h>
#include <stdlib.h>

union Data {
    int i;
    float f;
    char c;
}data;

int main() 
{
    union Data *ptr = &data;

    ptr->i = 42;
    printf("Целое число: %d\n", ptr->i);

    ptr->f = 3.14;
    printf("Число с плавающей точкой: %f\n", ptr->f);

    ptr->c = 'A';
    printf("Символ: %c\n", ptr->c);

    printf("Содержимое объединения: %d (как int), %f (как float), %c (как char)\n", ptr->i, ptr->f, ptr->c);

    return 0;
}
```

6. Результат выполненной работы:  
Целое число: 42
Число с плавающей точкой: 3.140000
Символ: A
Содержимое объединения: 1078523201 (как int), 3.139969 (как float), A (как char)

---

## №2.2

2. Поставленная задача:  
Напишите программу, которая использует union для побайтовой распечатки типа unsigned long

3. Математическая модель:  -

4. Список идентификаторов:

| Имя          | Тип         | Смысл                     |
|--------------|-------------|---------------------------|
| `data`       | `union`     | Объединение для хранения числа и его байтов |
| `value`      | `unsigned long` | Целое число         |
| `bytes`      | `unsigned char[]` | Массив байтов числа |

5. Код программы:

```c
#include <stdio.h>

union Data {
    unsigned long value;
    unsigned char bytes[sizeof(unsigned long)];
}data;

int main() 
{
    data.value = 0x123456789ABCDEF0;

    printf("Значение: %lx\n", data.value);
    printf("Байты (в порядке хранения в памяти):\n");

    for (int i = 0; i < sizeof(unsigned long); i++) 
    {
        printf("byte %d: %02x\n", i, data.bytes[i]);
    }

    return 0;
}
```

6. Результат выполненной работы:  
Значение: 123456789abcdef0
Байты (в порядке хранения в памяти):
byte 0: f0
byte 1: de
byte 2: bc
byte 3: 9a
byte 4: 78
byte 5: 56
byte 6: 34
byte 7: 12

---

## №2.3

2. Поставленная задача:  
Создайте перечислимый тип данных (enum) для семи дней недели и распечатайте на экране его значения, как целые числа.

3. Математическая модель:   -

4. Список идентификаторов:

| Имя          | Тип         | Смысл                     |
|--------------|-------------|---------------------------|
| `day`        | `enum`      | Переменная типа `Weekday` |
| `MONDAY`     | `enum`      | Понедельник (0)          |
| `TUESDAY`    | `enum`      | Вторник (1)              |
| `WEDNESDAY`  | `enum`      | Среда (2)                |
| `THURSDAY`   | `enum`      | Четверг (3)              |
| `FRIDAY`     | `enum`      | Пятница (4)              |
| `SATURDAY`   | `enum`      | Суббота (5)              |
| `SUNDAY`     | `enum`      | Воскресенье (6)          |

5. Код программы:

```c
#include <stdio.h>

enum Weekday {
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
}day;

int main() 
{
    for (day = MONDAY; day <= SUNDAY; day++) 
    {
        printf("%d\n", day);
    }

    return 0;
}
```

6. Результат выполненной работы:  
0
1
2
3
4
5
6

---

## №2.4

2. Поставленная задача:  
Создайте так называемое размеченное объединение union, которое
заключено в виде поля структуры struct вместе с ещё одним полем,
которое является перечислением enum и служит индикатором того,
что именно на текущий момент хранится в таком вложенном объединении. Создать и заполнить динамический массив таких структур с
объединениями внутри, заполняя вспомогательное поле перечисления
enum для сохранения информации о хранимом в каждом размеченном
объединении типе данных. Реализовать распечатку данных массива
таких структур в консоль.

3. Математическая модель:  -

4. Список идентификаторов:

| Имя          | Тип         | Смысл                     |
|--------------|-------------|---------------------------|
| `Type`       | `enum`      | Метка типа (INT или CHAR) |
| `Value`      | `union`     | Объединение для хранения значения |
| `Tagged`     | `struct`    | Структура с меткой и значением |
| `arr`        | `Tagged*`   | Массив структур `Tagged`  |
| `size`       | `int`       | Размер массива            |

5. Код программы:

```c
#include <stdio.h>
#include <stdlib.h>

enum Type { INT, CHAR };

union Value {
    int i;
    char c;
};

struct Tagged {
    enum Type type;
    union Value data;
};

int main() 
{
    int size = 2;
    struct Tagged* arr = malloc(size * sizeof(struct Tagged));

    arr[0].type = INT;
    arr[0].data.i = 100;

    arr[1].type = CHAR;
    arr[1].data.c = 'Z';

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
```

6. Результат выполненной работы:  
Элемент 0: число 100
Элемент 1: символ Z

---