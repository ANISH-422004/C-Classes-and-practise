#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *p1 = &arr[0];
    int *p2 = &arr[3];

    // 1. Addition
    printf("Original address: %p\n", (void*)p1);
    printf("After p1 + 2: %p\n", (void*)(p1 + 2));  // Points to arr[2]    

    // 2. Subtraction of number
    printf("After p2 - 2: %p\n", (void*)(p2 - 2));  // Points to arr[1]

    // 3. Subtracting two pointers
    int diff = p2 - p1;
    printf("Number of elements between p2 and p1: %d\n", diff);  // Should be 3

    // 4. Comparison
    if (p1 < p2)
        printf("p1 is before p2 in memory\n");
    else
        printf("p1 is not before p2\n");

    /*A     void*      is a generic pointer that can point to any data type, but it doesn't know what type it's pointing to.*/

    return 0;
}