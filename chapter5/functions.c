#include <stdio.h>

// 1. Average of three numbers
float average(float a, float b, float c) {
    return (a + b + c) / 3.0;
}

// 2. Celsius to Fahrenheit
float celsiusToFahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

// 3. Force of attraction: F = m * g
float calculateForce(float mass) {
    float g = 9.8;
    return mass * g;
}

// 4. Fibonacci using recursion
int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// 6. Recursive sum of first n natural numbers
int sumOfNatural(int n) {
    if (n == 1) return 1;
    return n + sumOfNatural(n - 1);
}

// 7. Pattern printing
void printPattern(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < (2*i + 1); j++) {
            printf("* ");
        }
        printf("\n");
    }
}

int main() {
    // Task 1
    printf("Average: %.2f\n", average(4, 7, 9));

    // Task 2
    printf("Fahrenheit: %.2f\n", celsiusToFahrenheit(37));

    // Task 3
    printf("Force: %.2f N\n", calculateForce(60));

    // Task 4
    int n = 7;
    printf("%dth Fibonacci number: %d\n", n, fibonacci(n));

    // Task 5
    int a = 4;
    printf("Task 5: %d %d %d\n", a, ++a, a++); // Output depends on compiler (undefined behavior)

    // Task 6
    printf("Sum of first %d natural numbers: %d\n", n, sumOfNatural(n));

    // Task 7
    printPattern(3);

    return 0;
}
