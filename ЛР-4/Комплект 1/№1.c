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
    if (n <= 1) return 1;           // базовый случай: 0! и 1! = 1
    return n * factorial_rec(n - 1); // рекурсивный вызов
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