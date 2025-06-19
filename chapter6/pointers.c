#include <stdio.h>

void change(int *a)
{
    *a = *a +1; 
}

int main()
{

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

    int i = 10;
    printf("Address of i: %p \n ", &i);
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

    /*
        POINTER TO A POINTER
    Just like ‘j’ is pointing to ‘i’ or storing the address of ‘i’, we can have another variable k
    which can further store the address of ‘j’. What will be the type of ‘k’?
    int **k;
    k = &j;
    36
    We can even go further one level and create a variable ‘l’ of type int*** to store the
    address of ‘k’. We mostly use int* and int** sometimes in real world programs.



    */

    int i1 = 10;
    int *j1 = &i1;  // j1 is a pointer to i1
    int **k1 = &j1; // k1 is a pointer to j1

    printf("Address of i1: %p\n", &i1);
    printf("Value of i1: %d\n", *j1);         // Dereference j1 to get the value of i1
    printf("Address stored in j1: %p\n", j1); // Print address stored in j1
    printf("Address of j1: %p\n", &j1);
    printf("Value of j1: %p\n", *k1);         // Dereference k1 to get the address stored in j1
    printf("Value of i1 via k1: %d\n", **k1); // Dereference k1 twice to get the value of i1

    /*
        call by value and call by reference

        CALL BY VALUE:
        In call by value, a copy of the actual parameter is passed to the function.
        Changes made to the parameter inside the function do not affect the actual parameter.

        example :
        void increment(int a) {
            a = a + 1;
        }
        int main() {

            int x = 5;
            increment(x);
            printf("%d", x);    // Output: 5 (x remains unchanged)
        }



        CALL BY REFERENCE:
        In call by reference, the address of the actual parameter is passed to the function.
        Changes made to the parameter inside the function affect the actual parameter.

        example :



        void increase(int* a){
                a* = a* +1 ;

        }


        int main() {
            int x = 5;
            increase(&x);
            printf("%d", x);    // Output: 6 (x is changed)
        }




    */

    int n = 5; 

    printf("Value of n before change: %d\n", n);
    change(&n) ; 
    printf("Value of n after change: %d\n", n);



    return 0;
}