#include <stdio.h>
#include <string.h>
int main() {
    // poiter Type casting 
    int a = 10;
    int *p = &a; // Pointer to int
    float *f = (float *)p; // Type casting pointer to float

    // Print the address and value using both pointers
    printf("Address of a: %p\n", (void *)&a);
    printf("Value of a using int pointer: %d\n", *p);
    printf("Value of a using float pointer (type casted): %f\n", *f);   


    struct Student
    {
        int roll; 
        char name[20];
        float marks;
    };
    

    // struct Student s1 = {1, "John Doe", 85.5};
    // s1.roll = 2; // Changing roll number
    // s1.marks = 90.0;
    // // chaneing the name  to Anish
    // strcopy(s1.name, "Anish"); // why so ?
    // printf("Roll: %d, Name: %s, Marks: %.2f\n", s1.roll, s1.name, s1.marks);
    

    //creating array if struct student 
    // struct Student students[3]; 

    // for (int i = 0; i < 2; i++)
    // {
    //     printf("Enter roll number: ");
    //     scanf("%d", &students[i].roll);
    //     printf("Enter name: ");
    //     scanf("%s", &students[i].name);  
    //     printf("Enter marks: ");
    //     scanf("%f", &students[i].marks);

    // }

    // printf("\n===== Student Details =====\n");
    // for (int i = 0; i < 2; i++) {
    //     printf("Roll: %d, Name: %s, Marks: %.2f\n", students[i].roll, students[i].name, students[i].marks);
    // }
    




    return 0;
}