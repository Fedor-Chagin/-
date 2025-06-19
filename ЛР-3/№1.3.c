#include <stdio.h>
#include <math.h>

// Функция для вычисления факториала
int factorial(int n) {
    if (n == 0) return 1;
    int result = 1;
    for (int i = 1; i <= n; i++) {
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
    
    double exp_real = 0.0; // Действительная часть результата
    double exp_imag = 0.0; // Мнимая часть результата
    
    for (int i = 0; i <= terms; i++) {
        int fact = factorial(i);
        double power_real = 1.0;
        double power_imag = 0.0;
        
        // Возведение комплексного числа в степень i
        for (int j = 0; j < i; j++) {
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