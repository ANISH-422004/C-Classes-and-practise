/*
1.Write a program to print the address of a variable. Use this address to get the
value of the variable.
2. Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to
a function and print its address. Are these addresses same? Why?
3. Write a program to change the value of a variable to ten times of its current
value.
4. Write a function and pass the value by reference.
5. Write a program using a function which calculates the sum and average of two
numbers. Use pointers and print the values of sum and average in main().
6. Write a program to print the value of a variable i by using “pointer to pointer” type
of variable.
7. Try problem 3 using call by value and verify that it does not change the value of
the said variable.


*/


//1.
// #include <stdio.h>

// int main() {
//     int x = 42;
//     int *ptr = &x;  // pointer to x

//     printf("Address of x: %p\n", (void*)&x);
//     printf("Value of x using pointer: %d\n", *ptr);

//     return 0;
// }


//2.

// #include <stdio.h>

// void printAddress(int* ptr){
//     printf("Address of i in function: %p\n", ptr);
// }

// int main() {
//     int i = 5;
//     printf("Addof i : %p\n" , &i); // Print address of i
//     printAddress(&i); // Pass address of i to function

//     return 0;
// }



// 3.
// #include <stdio.h>

// void changeValue(int *a) {

//     *a = *a * 10;
// }

// int main() {

//     int i = 5; 
//     printf("Value of i before change: %d\n", i);
//     changeValue(&i);
//     printf("Value of i after change: %d\n", i); // Should print 50
//     return 0;
// }


// 4.

// #include <stdio.h>

// void printAddress(int *a){
//     printf("Address of the value passed to me : %p\n" , a);
// } 

// int main() {
    
//     int x = 5;
//     int *ptr = &x; // Pointer to x
//     int **ptr2 = &ptr; // Pointer to pointer ptr
    
//     printf("Address of ptr : %p\n" , ptr2);
//      printf("Address of ptr : %p\n" , &ptr); // verify that ptr2 holds the address of ptr

//     printf("Address of x in main: %p\n", ptr);
//     printAddress(ptr); // Pass pointer to function


//     return 0;
// }


// 5.
// #include <stdio.h>

// int* sum(int a , int b) {
//     int d = a+b ;
//     int* p = &d; // Pointer to the sum
//     return p; // Return pointer to the sum
// }


// float* avarage(int a, int b) {
//     float d = (a + b) / 2.0;
//     float* p = &d; // Pointer to the average
//     return p; // Return pointer to the average

// }

// int main() {
    
//     int a = 10, b = 20;
//     int* pSum = sum(a, b);
//     float* pAvg = avarage(a, b);

//     printf("Sum: %d\n", *pSum); // Dereference pointer to get the sum
//     printf("Average: %.2f\n", *pAvg); // Dereference pointer to get the average

//     return 0;
// }