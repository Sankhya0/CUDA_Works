#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdint.h>  // For SIZE_MAX

int main()
{

    int arr[] = {12, 24, 36, 48, 60};

    size_t size = sizeof(arr)/sizeof(arr[0]);

    printf("Size of the array: %zu\n", size); // size of the array
    printf("Size of the size_t: %zu\n", sizeof(size_t)); // size of the size_t
    printf("Size of the int: %zu\n", sizeof(int)); // size of the int
    printf("Maximum value of size_t: %zu\n", SIZE_MAX); // size_t max value from stdint.h
    printf("Maximum value of int: %d\n", INT_MAX); // int max value

    return 0;
}

/**
 * size_t is an unsigned integer type that is specifically designed to represent the size of objects and array indices in memory. Its size is platform-dependent and is chosen to be able to represent the maximum size of any object that can be allocated in memory.
 * On modern 64-bit systems:
 * - size_t is typically 8 bytes (64 bits)
 * - int is typically 4 bytes (32 bits)
 *
 * The reason for this difference is:
 * - On 64-bit systems, memory addresses are 64 bits long
 * - size_t needs to be able to represent any valid memory address or size
 * - Therefore, size_t must be 64 bits (8 bytes) on these systems
 * - Meanwhile, int remains 32 bits for historical and compatibility reasons
 *
 * For example, if size_t were only 32 bits (4 bytes), it could only represent
 * sizes up to 4GB (2^32 bytes). This would be insufficient for modern systems
 * where programs can use much more memory.
**/