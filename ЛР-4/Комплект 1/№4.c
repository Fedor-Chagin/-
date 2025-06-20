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