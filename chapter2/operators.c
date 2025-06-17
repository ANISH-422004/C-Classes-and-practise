#include <stdio.h>
#include <math.h>

int main()
{
    // Artrthmatic operations

    int x = 10;
    int y = 20;
    int sum = x + y;

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", y - x);
    printf("Product: %d\n", x * y);
    printf("Quotient: %d\n", y / x);
    // power function is not available in C, but we can use the pow function from math.h
    printf("Power: %.2f\n", pow(x, 2)); // x raised to the power of 2q

    // TYPE CONVERSION
    /*
    An Arithmetic operation between
    • int and int → int
    • int and float → float
    • float and float → float
    */

    int a = 5.5;
    printf("Integer from float: %d\n", a); // Implicit conversion from float to int
    /*Quick Quiz: int k = 3.0 /9; value of k? and why?
    Ans: 3.0/9 = 0.333. But since k is an int, it cannot store floats & value 0.33 is demoted to
    0.
    */

    return 0;
}