#include <stdio.h>
#include <stdlib.h>


int main() {
    // realloc() : a built-in function in C that changes the size of previously allocated memory block.
    // It can be used to increase or decrease the size of the memory block without loosing Data .
    // syntax: void *realloc(void *ptr, size_t new_size); example :
    
    int * ptr = (int *)malloc(sizeof(int) * 5); // Allocate memory for 5 integers
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1; // Exit if memory allocation fails
    }

    // Initialize the allocated memory
    for (int i = 0; i < 5; i++) {
        ptr[i] = i + 1; // Assign values 1 to 5
    }

    printf("Original array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");



    // Reallocate memory to hold 10 integers
    int *new_ptr = (int *)realloc(ptr, sizeof(int) * 10);
    if (new_ptr == NULL) {
        printf("Memory reallocation failed\n");
        free(ptr); // Free the original memory if reallocation fails
        return 1;
    }
    ptr = new_ptr;

    // Initialize the new elements
    for (int i = 5; i < 10; i++) {
        ptr[i] = i + 1; // Assign values 6 to 10
    }

    printf("Reallocated array: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    free(ptr); // Free the allocated memory



    return 0;
}