#include <stdio.h>

int main() {
    
    // memory address of a variable :-  THE “ADDRESS OF” (&) OPERATOR 
    // %p is format specifier used to print the address of a variable in C.
    // &i is used to get the address of the variable i.
    // The address of a variable is the location in memory where the variable is stored.


    /*
        &i → 87994
        &j → 87998


        *(&i) =72
        *(&j) = 87994
*/


    int i = 10 ; 
    printf("Address of i: %p \n " , &i);
    printf("value stored at address of i: %d \n", *(&i));


    /*
        pointer is a variable that stores the address of another variable.
        A pointer is declared using the * operator.
        The address of a variable is obtained using the & operator.
        The value stored at the address of a variable is obtained using the * operator.

        SYNTAX:
        data_type *pointer_name = &variable_name;
        Example: with int data type
        int *ptr = &i; // ptr is a pointer to an integer variable i eg : 1123242

        Example: with float data type
        float *fptr = &f; // fptr is a pointer to a float variable f eg : 1123242.0
        
        Example: with char data type
        char *cptr = &c; // cptr is a pointer to a char variable c eg : 'a'

        Example: with double data type
        double *dptr = &d;

        int *ptr; // ptr is a pointer to an integer
        int a = 10;
        ptr = &a; // ptr now holds the address of a
        printf("Address of a: %p\n", ptr); // prints the address of a
        printf("Value of a: %d\n", *ptr); // dereferences ptr to get the value of a
        // Example of pointer usage
        int *ptr; // Declare a pointer to an integer
        int a = 10; // Declare an integer variable
        ptr = &a; // Assign the address of a to ptr
        printf("Address of a: %p\n", ptr); // Print the address stored in ptr
        printf("Value of a: %d\n", *ptr); // Dereference ptr to get the value of a
        
    
    */


    int a = 10;
    char character = 'a'; // Correct: single character in single quotes

    // Pointer to integer
    int *ptr = &a;

    // Pointer to character
    char *p = &character;

    // Print address of a
    printf("Address of a: %p\n", &a);

    // Print value of character via pointer
    printf("Value of character: %c\n", *p);

    // Print address stored in ptr (which points to 'a')
    printf("Address stored in ptr: %p\n", ptr);


    return 0;
}