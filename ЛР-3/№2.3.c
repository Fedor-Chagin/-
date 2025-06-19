#include <stdio.h>

enum Weekday {
    MONDAY,    // = 0
    TUESDAY,   // = 1
    WEDNESDAY, // = 2
    THURSDAY,  // = 3
    FRIDAY,    // = 4
    SATURDAY,  // = 5
    SUNDAY     // = 6
}day;

int main() 
{
    for (day = MONDAY; day <= SUNDAY; day++) 
    {
        printf("%d\n", day);
    }

    return 0;
}