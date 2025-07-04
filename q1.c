// Sort an array of Student structs in ascending order of marks (you can easily reverse for descending).
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
typedef struct student
{
    int roll;
    char name[20];
    float marks;
} Student;


void swap ( Student *a , Student *b );


// Display function
void displayStudents(Student s[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Roll: %d, Name: %s, Marks: %.2f\n", s[i].roll, s[i].name, s[i].marks);
    }
}
 

// sorting function complexcity O(n^2)
void sortByMarks(Student s[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (s[j].marks > s[j + 1].marks)
            {
                // Swap the students
                // Student temp = s[j];
                // s[j] = s[j + 1];
                // s[j + 1] = temp;
                swap(&s[j], &s[j + 1]);
            
            }
        }
    }
}

// swapping function 
void swap ( Student *a , Student *b ){
    Student temp = *a;
    *a = *b;
    *b = temp;

}

/*
    undefined reference to `swap`
    ld returned 1 exit status

💥 This means:
The compiler saw the declaration of the function swap() — but the linker couldn’t find the actual definition of it anywhere when trying to build the final executable.

*/

bool doesStudentExists(Student s[] , int n  , int roll){
    for (int i = 0; i < n; i++){
        if (s[i].roll == roll) {
            return true;
        }
    }
    return false;
}


int main()
{
    int n = 3;
    Student students[3] = {
        {101, "John", 78.5},
        {105, "Anish", 92.3},
        {103, "Raj", 84.0}};

    printf("Before sorting:\n");
    displayStudents(students, n);

    sortByMarks(students, n);

    printf("\nAfter sorting by marks:\n");
    displayStudents(students, n);    

    // Check if a student with roll number 102 exists
    int rollToCheck = 102;
    if (doesStudentExists(students, n, rollToCheck)) {
        printf("\nStudent with roll number %d exists.\n", rollToCheck);
    } else {
        printf("\nStudent with roll number %d does not exist.\n", rollToCheck);
    }


    return 0;
}