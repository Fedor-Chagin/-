#include <stdio.h>

union Data {
    unsigned long value;   // целое число
    unsigned char bytes[sizeof(unsigned long)]; // доступ к его байтам
}data;

int main() 
{
    data.value = 0x123456789ABCDEF0; //16-ти ричная сист. счисл.

    printf("Значение: %lx\n", data.value);
    printf("Байты (в порядке хранения в памяти):\n");

    for (int i = 0; i < sizeof(unsigned long); i++) 
    {
        printf("byte %d: %02x\n", i, data.bytes[i]);
    }

    return 0;
}
