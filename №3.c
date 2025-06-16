#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int a = 5, b = 7, sum;
    int *ptrA = &a, *ptrB = &b;
    if (*ptrA > *ptrB)
    {
        printf("%d\n", *ptrA);
    }
    else
    {
        printf("%d\n", *ptrB);
    }
    
    return 0;
}
