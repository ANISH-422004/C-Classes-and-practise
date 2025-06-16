// #include <stdio.h>

// int main() {
//     int arr[5] = {1, 2, 3, 4, 5};

//     // Loop through the array
//     for (int i = 0; i < 5; i++) {
//         printf("%d ", arr[i]);  // %d is for integers
//     }

//     printf("%p" , arr);
//     return 0;
// }


#include <stdio.h>

int main() {
    int age = 21;
    float pi = 3.14159;
    char grade = 'A';
    char name[] = "Anish";

    printf("Name: %s\n", name);         // String
    printf("Age: %d\n", age);           // Integer
    printf("Grade: %c\n", grade);       // Character
    printf("Pi: %.2f\n", pi);           // Float (2 decimals)
    
    return 0;
}