// Null Pointer
// 1. Null pointer is a pointer that does not point to any memory location
// 2. It is represented by NULL
// 3. It is a constant defined in stdlib.h
// 4. Initialize pointers to NULL when they dont have any valid memory address to point to
// 5. Check pointers for NULL before dereferencing them

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = NULL; // This is a null pointer
    printf("1. Initial value of ptr: %p\n", (void*)ptr); // We are typecasting the pointer to void pointer

    // Check for null before using
    if (ptr == NULL)
    {
        printf("2. ptr is NULL. Cannot dereference\n");
    }

    ptr = malloc(sizeof(int));
    if (ptr == NULL)
    {
        printf("3. Memory allocation failed\n");
        return 1;
    }
    printf("4. Memory allocation successful. ptr: %p\n", (void*)ptr);
}