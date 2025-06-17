/*
    📘 C LANGUAGE NOTES WITH EXAMPLES AND COMMENTS
    Author: Anish
    Purpose: Beginner-friendly C notes for DSA and placement prep
*/

#include <stdio.h>
#include <math.h>

// ----------------------
// TYPE DECLARATION INSTRUCTIONS
// ----------------------

int type_declaration_example() {
    int a;              // Declare an integer
    float b;            // Declare a float
    char c;             // Declare a character

    int i = 10;         // Declare and initialize
    int j = i;          // Initialize using another variable

    int x = 2, y = 3, z = 4;  // Multiple declarations
    int sum = x + y;          // Valid

    // Invalid: Using variable before declaration (will cause error if uncommented)
    // float p = q + 3; 
    // float q = 1.1;

    // Valid: assign same value to multiple variables
    int m, n, o;
    m = n = o = 30;

    printf("Type Declaration Done.\n");
    return 0;
}

// ----------------------
// ARITHMETIC INSTRUCTIONS
// ----------------------

int arithmetic_example() {
    int b = 2, c = 3;
    int result = b * c; // Valid
    // int wrong = b*c = result; // Invalid: cannot assign to expression

    printf("Multiplication Result: %d\n", result);

    // Modulus examples
    printf("Modulus 5 %% 2 = %d\n", 5 % 2);
    printf("Modulus -5 %% 2 = %d\n", -5 % 2);

    // Type conversion
    printf("5 / 2 = %d\n", 5 / 2);         // Outputs 2
    printf("5.0 / 2 = %f\n", 5.0 / 2);     // Outputs 2.5

    int a = 3.5;        // 3.5 is demoted to 3
    float f = 8;        // 8 promoted to 8.0

    printf("int a = 3.5 gives: %d\n", a);
    printf("float f = 8 gives: %f\n", f);

    return 0;
}

// ----------------------
// OPERATOR PRECEDENCE AND ASSOCIATIVITY
// ----------------------

int precedence_example() {
    int x = 6, y = 3, z = 2;

    int result1 = x * y / z;  // (x * y) / z = (6 * 3) / 2 = 18 / 2 = 9
    int result2 = x / y * z;  // (x / y) * z = (6 / 3) * 2 = 2 * 2 = 4

    printf("x*y/z = %d\n", result1);
    printf("x/y*z = %d\n", result2);

    // Pro Tip: Use parentheses for clarity
    int parenthesis_result = x * (y / z);
    printf("x*(y/z) = %d\n", parenthesis_result);

    return 0;
}

// ----------------------
// CONTROL INSTRUCTIONS
// ----------------------

// 1. Sequence Control: executes in order
int sequence_example() {
    printf("Step 1\n");
    printf("Step 2\n");
    printf("Step 3\n");
    return 0;
}

// 2. Decision Control: if-else
int decision_example(int num) {
    if (num % 2 == 0) {
        printf("%d is even\n", num);
    } else {
        printf("%d is odd\n", num);
    }
    return 0;
}

// 3. Loop Control: for loop
int loop_example() {
    for (int i = 1; i <= 5; i++) {
        printf("i = %d\n", i);
    }
    return 0;
}

// 4. Case Control: switch-case
int case_example(int grade) {
    switch (grade) {
        case 10:
            printf("Outstanding\n");
            break;
        case 9:
            printf("Excellent\n");
            break;
        default:
            printf("Keep improving!\n");
    }
    return 0;
}

// ----------------------
// MAIN FUNCTION
// ----------------------

int main() {
    type_declaration_example();
    arithmetic_example();
    precedence_example();
    sequence_example();
    decision_example(5);
    loop_example();
    case_example(9);
    return 0;
}
