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
