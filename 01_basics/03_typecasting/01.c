#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main()
{
    float x = 68.31;
    int i = (int) x; // cast float to int -> 68

    printf("%d\n", i);

    char c = (char) i;
    printf("%c\n", c); // cast int to char -> 'D' as 65 is 'A' in ASCII

    return 0;
}
