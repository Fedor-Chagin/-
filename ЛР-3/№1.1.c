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
