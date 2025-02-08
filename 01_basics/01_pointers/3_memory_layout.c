#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = {1,2,3,4,5};

    int * ptr = arr;

    for (int i=0 ; i<5 ; i++)
    {
        printf("%d\t ", *ptr); // Value at the memory location
        printf("%p\t", ptr); // Address of the memory location
        printf("%p\n", &ptr); // Address of the pointer
        ptr++;
    }
}

// Memory Layout
// We can see that the memory is allocated in a contiguous block
