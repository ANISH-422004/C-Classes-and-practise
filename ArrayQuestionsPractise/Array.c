#include <stdio.h>
#include <stdbool.h>

bool searchElementInArray(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return true; // Element found
        }
    }
    return false; // Element not found
}

int main()
{
    // Q1. Declare and Initialize an Array
    int a[5] = {1, 2, 3, 4, 5};
    // Q2. Print the Array
    for (int i = 0; i < 5; i++)
    {
        printf("%d,", a[i]);
    }
    // Q2. Sum of Elements in an Array
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += a[i];
    }
    printf("\nSum of elements: %d\n", sum);

    //  Q3. Find Maximum Element
    int max = -2147483648; // Minimum value for int
    for (int i = 0; i < 5; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    printf("Maximum element: %d\n", max);

    // Q4. Count Even and Odd Numbers

    int evenCount = 0, oddCount = 0;
    for (int i = 0; i < 4; i++)
    {
        if (a[i] % 2 == 0)
        {
            evenCount++;
        }
        else
            oddCount++;
    }

    printf("Even count: %d, Odd count: %d\n", evenCount, oddCount);

    // Q5. Reverse Array (In-Place)

    for (int i = 0; i < 5 / 2; i++)
    {
        int t = a[i];
        a[i] = a[5 - i - 1];
        a[5 - i - 1] = t;
    }

    printf("Reversed array: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d, ", a[i]);
    }

    // 🔹 Q6. Copy Elements to Another Array

    printf("\nCopied array: ");
    int b[5];
    for (int i = 0; i < 5; i++)
    {
        b[i] = a[i];
        printf("%d, ", b[i]);
    }

    // Q7. Search for an Element

    int searchElement = 3;
    if (searchElementInArray(a, 5, searchElement))
    {
        printf("\nElement %d found in the array.\n", searchElement);
    }

    // / Q8. Frequency of Each Element
    // Input 10 elements and print the frequency (count) of each unique element.
    // 🔍 Nested loop or use a visited[] array

    int arr[10] = {1, 2, 2, 3, 3, 3, 4, 5, 5, 6};
    int visited[10] = {0}; // To track visited elements

    printf("\nFrequency of each element:\n");
    for (int i = 0; i < 10; i++)
    {
        if (visited[i] == 0)
        {                  // If not visited
            int count = 1; // Count occurrences
            for (int j = i + 1; j < 10; j++)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                    visited[j] = 1; // Mark as visited
                }
            }
            printf("Element %d: %d times\n", arr[i], count);
            visited[i] = 1; // Mark the current element as visited
        }
    }

    // 🔹 Q9. Remove Duplicate Elements
    //  Given an array of integers, remove all duplicate elements in-place, and print the updated array without duplicates.
    int arr4[20] = {1, 2, 2, 3, 4, 4, 5, 6, 6, 7, 8, 8, 9, 10, 10, 11, 12, 13, 14, 15};
    int n = 20; // Size of the array

    // Remove duplicates
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                // Shift elements to the left
                for (int k = j; k < n - 1; k++)
                {
                    arr4[k] = arr[k + 1];
                }
                n--; // Reduce array size
                j--; // Stay on the same index after shift
            }
        }
    }
    // Output result
    printf("Array after removing duplicates:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr4[i]);
    }



    return 0;
}