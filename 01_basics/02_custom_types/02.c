#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    float x;
    float y;
} point;

int main()
{
    point p1 = {10, 20};

    printf("Point p1: (%f, %f)\n", p1.x, p1.y);
    printf("Size of point: %zu\n", sizeof(point));

    return 0;
}
