/*
    That’s a fantastic mindset, Anish! Since you're moving from JavaScript to C, your main challenge is handling:

Manual memory (no auto-resizing arrays like JS)

Type declarations (static typing)

Pointers and array indexing (no push, no .length)

Manual input/output (scanf, printf)

Function handling with pointer arguments
*/


#include <stdio.h>

// 5. Function to reverse an array
void reverseArray(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

// 6. Function to count positive integers
int countPositives(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++)
        if (arr[i] > 0) count++;
    return count;
}

int main() {
    // 1. Verify ptr + 2 points to 3rd element
    int nums[10] = {0};  // auto-init to 0
    int *ptr = nums;
    printf("1. Base address: %p, ptr+2: %p, &nums[2]: %p\n", (void*)ptr, (void*)(ptr+2), (void*)&nums[2]);

    // 2. *(S + 3) refers to the fourth element, not the third
    int S[3] = {10, 20, 30};
    printf("2. *(S+2) = %d (3rd element), *(S+3) = %d (undefined access!)\n", *(S+2), *(S+3)); // Warning: out of bounds

    // 3. Table of 5
    int table5[10];
    for (int i = 0; i < 10; i++)
        table5[i] = 5 * (i + 1);
    printf("3. Table of 5:\n");
    for (int i = 0; i < 10; i++) printf("%d ", table5[i]);
    printf("\n");

    // 4. General input table
    int num;
    printf("4. Enter a number to print its table: ");
    scanf("%d", &num);
    int table[10];
    for (int i = 0; i < 10; i++)
        table[i] = num * (i + 1);
    printf("Table of %d:\n", num);
    for (int i = 0; i < 10; i++) printf("%d ", table[i]);
    printf("\n");

    // 5. Reverse array
    reverseArray(table, 10);
    printf("5. Reversed table:\n");
    for (int i = 0; i < 10; i++) printf("%d ", table[i]);
    printf("\n");

    // 6. Count positives
    int arr6[] = {3, -1, 0, 8, -4, 5};
    int positives = countPositives(arr6, 6);
    printf("6. Positives in array: %d\n", positives);

    // 7. 2D table for 2, 7, 9
    int tableSet[3][10];
    int baseNums[3] = {2, 7, 9};
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 10; j++)
            tableSet[i][j] = baseNums[i] * (j + 1);
    printf("7. Tables of 2, 7, 9:\n");
    for (int i = 0; i < 3; i++) {
        printf("Table of %d: ", baseNums[i]);
        for (int j = 0; j < 10; j++) printf("%d ", tableSet[i][j]);
        printf("\n");
    }

    // 8. Dynamic input for 3 base numbers
    int userTables[3][10], userInputs[3];
    printf("8. Enter 3 numbers to create their tables:\n");
    for (int i = 0; i < 3; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &userInputs[i]);
    }
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 10; j++)
            userTables[i][j] = userInputs[i] * (j + 1);
    for (int i = 0; i < 3; i++) {
        printf("Table of %d: ", userInputs[i]);
        for (int j = 0; j < 10; j++) printf("%d ", userTables[i][j]);
        printf("\n");
    }

    // 9. 3D Array address view
    int cube[2][2][2] = {{{1,2},{3,4}},{{5,6},{7,8}}};
    printf("9. Addresses of 3D array elements:\n");
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            for (int k = 0; k < 2; k++)
                printf("Address of cube[%d][%d][%d] = %p\n", i, j, k, (void*)&cube[i][j][k]);

    return 0;
}
