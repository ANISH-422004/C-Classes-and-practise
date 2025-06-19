#include <stdio.h>

int main()
{
     /*
    Q. Write a program to accept marks of five students in an array and print them on the screen.
    ans : 
    int studentnumbers[5];
    printf("marks of five students are:\n");

    // Input: Read marks
    for (int i = 0; i < 5; i++)
    {
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    // Output: Print marks
    printf("\nMarks of the students:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Student %d: %d\n", i + 1, marks[i]);
    }

    */



    int marks[5] = {10, 20, 30, 40, 50}; // Declare and initialize an array of integers
    int *p = &marks[0];                  // Pointer to the first element of the array
    // or alternative syntax : int *p = marks; // Pointer to the first element of the array

    printf("Address of marks[0]: %p\n", p); // Print the address of the first element
    printf("Value of marks[0]: %d\n", *p);  // Dereference the pointer to get the value of the first element

    // Print the addresses and values of all elements in the array using pointer arithmetic
    for (int i = 0; i < 5; i++)
    {
        printf("Address of marks[%d]: %u\n", i, p + i);  // Print address of each element
        printf("Value of marks[%d]: %d\n", i, *(p + i)); // Dereference pointer to get value of each element
    }

   

    return 0;
}