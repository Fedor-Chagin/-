#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int a = 5, b = 7, sum;
    int *ptrA = &a, *ptrB = &b, *ptrSum = &sum;
    *ptrSum = *ptrA + *ptrB;
    printf("Сумма: %d\n", *ptrSum);
    return 0;
}
