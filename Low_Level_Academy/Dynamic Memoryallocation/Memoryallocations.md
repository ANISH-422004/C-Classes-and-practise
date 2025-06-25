# 🧠 Static vs Dynamic Memory Allocation in C

Understanding memory allocation is crucial in systems programming and embedded development. The C language supports both **static** and **dynamic** memory allocation. This guide explains both in a beginner-friendly yet deep way.

---

## 📦 1. What is Memory Allocation?

Memory allocation is the process of reserving a portion of memory during a program’s execution to store data.

There are two types:

- **Static Memory Allocation**: Allocated at compile-time.
- **Dynamic Memory Allocation**: Allocated at runtime from the heap of the process.

---

## 🔒 Static Memory Allocation

### 📌 Definition

Static memory is reserved **during compilation**. The size and type must be known at compile time.

### 🛠 How it Works

- Done automatically by the compiler.
- Allocates memory on the **stack** (for local variables) or **data segment** (for globals).
- Memory is freed automatically when the function ends (stack) or when the program ends (data segment).

### PROBLEMS FACED IN STATIC MEMORY ALLOCATION

-If you are allocating memory for an array during compile time then you have to fix the size at the time of declaration. Size is fixed and user cannot increase or decrease the size of the array at run time.!
-If the values stored by the user in the array at run time is less than the size specified then there will be wastage of memory.
-If the values stored by the user in the array at run time is more than the size specified then the program may crash or misbehave.

### ✅ Characteristics

| Property           | Description                              |
|-------------------|------------------------------------------|
| Size              | Fixed at compile-time                    |
| Memory Location   | Stack / Data Segment                     |
| Lifetime          | Entire function or program lifetime      |
| Speed             | Very fast                                |
| Flexibility       | Low – can’t change size during runtime   |

### 💡 Example

```
#include <stdio.h>

int global_var = 10;           // Allocated in Data Segment

void foo() {
    int local_var = 5;         // Allocated in Stack
    int fixed_arr[3] = {1, 2, 3};  // Allocated in Stack
    printf("%d\n", fixed_arr[1]);
}


```


## 🔄 Dynamic Memory Allocation

### 📌 Definition
Dynamic memory allocation allows programs to request memory at runtime using functions like `malloc()`, `calloc()`, and `free()`. This enables flexible memory usage based on actual needs. 

### 🛠 How it Works 
- Memory is allocated from the **heap**.
- The programmer must manage memory manually.
- Memory can be resized or freed as needed.

### PROBLEMS FACED IN DYNAMIC MEMORY ALLOCATION 
- If you allocate memory dynamically and forget to free it, it leads to **memory leaks**.
- If you free memory that was not allocated dynamically, it can cause **undefined behavior**.
### ✅ Characteristics
| Property           | Description                              |
|-------------------|------------------------------------------|
| Size              | Flexible – can change at runtime        |
| Memory Location   | Heap                                     |
| Lifetime          | Until explicitly freed                   |
| Speed             | Slower than static allocation            |
| Flexibility       | High – can allocate/deallocate as needed |
### 💡 Example





#include <stdio.h>
#include <stdlib.h>

```
void dynamicArrayExample() {
    int *arr;
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Dynamic memory allocation
    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return;
    }

    // Use the array
    for (int i = 0; i < n; i++) {
        arr[i] = i * 2;
    }

    // Print the array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(arr);
}
int main() {
    foo();                // Call static memory example
    dynamicArrayExample(); // Call dynamic memory example
    return 0;
}
```
### Key Functions
| Function | Description |
|----------|-------------|
| `malloc(size_t size)` | Allocates `size` bytes of memory and returns a pointer to it. |
| `calloc(size_t num, size_t size)` | Allocates memory for an array of
`num` elements, each of `size` bytes, and initializes it to zero. |
| `realloc(void *ptr, size_t new_size)` | Resizes the memory block pointed to by `ptr` to `new_size` bytes. |
| `free(void *ptr)` | Deallocates the memory block pointed to by `ptr`. |

### Common Pitfalls

- **Memory Leaks**: Forgetting to free allocated memory.
- **Dangling Pointers**: Using pointers after freeing the memory they point to.


