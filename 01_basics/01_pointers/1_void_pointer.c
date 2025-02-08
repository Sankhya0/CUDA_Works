// void pointer
// 1. void pointer is a pointer that has no type
// 2. void pointer can point to any type of data
// 3. void pointer cannot be dereferenced directly
// 4. void pointer can be converted to any type of pointer
// 5. void pointer can be used to implement generic functions

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 10;
    float fnum = 10.5;

    void *ptr; // void pointer -> This currently does not have any type

    ptr = &num;
    printf("Integer: %d\n", *(int*)ptr);
    // Here we are dereferencing the void pointer and converting it to an int pointer
    // This is called typecasting
    // We are basically converting the void pointer to an int pointer
    // so we are dereferecing the void pointer which has been typecasted to an int pointer

    ptr = &fnum;
    printf("Float: %f\n", *(float*)ptr);
    // Here we are dereferencing the void pointer and converting it to a float pointer
}

// malloc is also internally using void pointer

