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
