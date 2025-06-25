#include <stdio.h>
#include <stdlib.h>
int main() {
      // malloc() : a built-in function in C that allocates a specified number of bytes in memory and returns a pointer to the first byte of the allocated memory or else NULL if the allocation fails.

    //   syntax :  void *malloc(size_t size);

    //size_t is an unsigned integer ( unsigned integer is a data type where the value can only be positive range form 0 to 2^64-1 ) type that is used to represent the size of an object in bytes. It is defined in the <stddef.h> header file.
    //   size_t is typically used for memory allocation functions like malloc(), calloc(), and realloc

    // lets make a program that allocates memory for an integer using malloc() and then frees that memory. 

    int i , n ; 
    printf("Enter the number of intergers : ");
    scanf("%d", &n);
    int* ptr = (int*)malloc(n * sizeof(int)); // Allocate memory for n integers
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return -1; // Exit if memory allocation fails
    }
    for( int i = 0; i < n; i++) {
        ptr[i] = i + 1; // Assign values to the allocated memory
    }

    for (int i = 0; i < n; i++) {
        printf("Integer %d: %d\n", i + 1, ptr[i]); // Print the integers  *(ptr+i) == ptr[i]
    }

    free(ptr); // Free the allocated memory


    
    return 0;
}