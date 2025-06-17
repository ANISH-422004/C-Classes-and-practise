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

    float b = 9/4 ;// op : 2.0 how ? 9 is int and 4 is int, so the result is int that is 2. and when implicitly converted to float, it becomes 2.0
    printf("Float from int division: %f\n", b); // Implicit conversion from int to float 



    /*
            3*x – 8*y is (3x)-(8y) or 3(x-8y)?
            In C language simple mathematical rules like BODMAS, no longer apply.
            The answer to the above questions is provided by operator precedence & associativity.
    
    */


    // operators precedence : Operators of higher priority are evaluated first in the absence of parenthesis
    // 1. Parentheses
    // 2. Exponentiation
    // 3. Multiplication and Division
    // 4. Addition and Subtraction

    // Example of operator precedence
    //example : 1
    int result = 2 + 3 * 4 - 5; // 2 + (3 * 4) - 5 = 2 + 12 - 5 = 9
    printf("Result of operator precedence: %d\n", result);
    //example : 2
    int a1 = 10;
    int b1 = 5;
    int c1 = 2;
    int result2 = a1 + b1 * c1; // 10 + (5 * 2) = 10 + 10 = 20



    // Increment and Decrement operators
    int count = 5;
    printf("Count before increment: %d\n", count);
    count++;
    printf("Count after increment: %d\n", count);
    count--;
    printf("Count after decrement: %d\n", count);


    //OPERATOR ASSOCIATIVITY :  When operators of equal priority are present in an expression, the tie is taken care of by associativity.

    /*
         x*y/z → (x*y)/z
        x/y*z → (x/y)*z
        *, / follows left to right associativity
    
    */

    //Pro Tip: Always use parenthesis in case of confusion

    return 0;
}