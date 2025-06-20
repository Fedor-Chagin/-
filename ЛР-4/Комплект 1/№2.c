#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int quantity= 12;
int i;
int n;

void replacement(int *M, int size) //Можно использовать и quantity или не передавать 2-ую переменную, но так не принято.
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
    // if (M == NULL) 
    // {
    //     printf("Ошибка выделения памяти\n");
    //     return 1;
    // }

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
