#include <stdio.h>

int main() {
    // poiter Type casting 
    int a = 10;
    int *p = &a; // Pointer to int
    float *f = (float *)p; // Type casting pointer to float

    // Print the address and value using both pointers
    printf("Address of a: %p\n", (void *)&a);
    printf("Value of a using int pointer: %d\n", *p);
    printf("Value of a using float pointer (type casted): %f\n", *f);   




    return 0;
}