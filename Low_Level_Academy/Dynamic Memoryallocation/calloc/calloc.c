#include <stdio.h>
#include <stdlib.h> // For calloc() and free()
int main()
{

    // calloc() : a built-in function in C that allocates memory for an array of elements, initializes all bytes to zero, and returns a pointer to the allocated memory.
    // syntax: void *calloc(size_t num, size_t size); ex : int *ptr = (int *)calloc(5, sizeof(int)); // Array of 5 integers
    // size_t is an unsigned integer type used to represent the size of an object in bytes, defined in the <stddef.h> header file.
    // The first parameter (num) specifies the number of elements to allocate, and the second parameter (size) specifies the size of each element in bytes.
    // Each block is initialized to zero with calloc, which is useful for ensuring that the allocated memory does not contain garbage values but with malloc it is initalized by some garbage value.
    // Return null if the allocation fails (sufficient mem is not present in heap), otherwise it returns a pointer to the allocated memory.
    // Let's create a program that allocates memory for an array of integers using calloc() and then frees that memory.

    int n;
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    int *ptr = (int *)calloc(n, sizeof(int)); // Allocate memory for n integers (int *) means we are typecasting the void pointer returned by calloc to an int pointer)
    if (ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return -1; // Exit if memory allocation fails
    }

    for (int i = 0; i < n; i++)
    {
        ptr[i] = i * 2; // Assign values to the allocated memory
    }

    int *temp = ptr;
    for (int i = 0; i < n; i++)
    {
        printf("Integer at position %d: %d , Address: %p\n", i, *temp, (void *)temp);
        temp++;
    }

    /*
    
        for (int i = 0; i < n; i++) {
             printf("Integer at position %d: %d , Address: %p\n", i, ptr[i], (void *)&ptr[i]);
        }

        Key Concepts in This Loop
            You're using array-style indexing with a pointer — ptr[i]. So you're not changing the pointer directly, but you're accessing memory using calculated offsets.
            
        🔍 What happens under the hood?
            👉 This line:
            ptr[i]  Is equivalent to:   *(ptr + i)
           ✅ It does pointer arithmetic, but does NOT change ptr.
    
    */

    free(ptr); // Free the allocated memory

    return 0;
}