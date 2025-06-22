#include <stdio.h>
#include <string.h>

/*
=====================================
📘 STRUCTURES IN C — COMPLETE NOTES
=====================================

✅ STRUCTURE OVERVIEW:
- A `struct` groups **dissimilar data types** (like int, float, char[]) into a single unit.
- Useful for modeling real-world entities (e.g., Employee, Student, Product).
- Syntax:
    struct TypeName {
        // members
    };

Example:
    struct employee {
        int code;
        float salary;
        char name[10];
    };
*/

// Traditional structure declaration
struct employee {
    int code;
    float salary;
    char name[10];
};

// Typedef for easier declaration
typedef struct employee Employee;

// Function prototype for demonstration
void show(Employee e);  // Pass structure to function

int main() {
    // Input 3 employees
    Employee facebook[3]; // Array of structures Employee

    for (int i = 0; i < 3; i++) {
        printf("Enter employee %d code: ", i + 1);
        scanf("%d", &facebook[i].code);

        printf("Enter employee %d salary: ", i + 1);
        scanf("%f", &facebook[i].salary);

        printf("Enter employee %d name: ", i + 1);
        scanf("%s", facebook[i].name); // no spaces allowed
    }

    // Display all employee details
    printf("\n===== Employee Details =====\n");
    for (int i = 0; i < 3; i++) {
        show(facebook[i]);
    }

    // Pointer to structure
    Employee *ptr = &facebook[0];
    printf("\nAccess via pointer: Code = %d, Name = %s\n", ptr->code, ptr->name); // this is privillaged syntax otherwise we can use (*ptr).code

    // Initializing a structure
    Employee harry = {100, 71.22, "harry"};
    Employee shubh = {0};  // All fields set to 0

    printf("\nInitialized Struct: %s, Code: %d, Salary: %.2f\n", harry.name, harry.code, harry.salary);

    return 0;
}

// Function to show employee details
void show(Employee e) {
    printf("Code: %d, Salary: %.2f, Name: %s\n", e.code, e.salary, e.name);
}

/*
=======================
📌 WHY USE STRUCTURES?
=======================
a. Structures keep related data grouped together.
b. Easy to manage & pass around in programs.
c. Essential for scalable data modeling.

a[] = array of int
facebook[] = array of Employee structs

=====================================
📌 STRUCTURE FEATURES IN PRACTICE:
=====================================
1. Array of Structures:
   Employee facebook[100];
   facebook[0].code = 101;
   facebook[1].code = 102;

2. Structure in Memory:
   Structures are stored in contiguous memory.

3. Pointer to Structure:
   Employee *ptr = &e1;
   Access: ptr->code instead of (*ptr).code

4. Passing Struct to Function:
   Just like int or float.

5. typedef with Struct:
   typedef struct Complex { float real; float img; } ComplexNo;
   Usage: ComplexNo c1, c2;
*/
