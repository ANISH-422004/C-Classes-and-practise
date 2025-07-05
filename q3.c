#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
🔷 Problem Statement:
Design a C program that stores information about multiple patients in a hospital. Each patient has:

Name (char[50])

Age (int)

Disease (char[50])

Room Number (int)
*/

typedef struct
{
    char Name[50];
    int age;
    char disease[50];
    int roomNumber;
} Patient;

// input function to take patient details
void inputPatients(Patient p[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter details for Patient %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", p[i].Name); // Arrays (especially char[]) already act like pointers, so you don’t need &.
        printf("Age: ");
        scanf("%d", &p[i].age);
        printf("Disease: ");
        scanf("%s", p[i].disease);
        printf("Room Number: ");
        scanf("%d", &p[i].roomNumber);
    }
}

// function to print details of patients
void displayPatients(Patient *p, int n)
{
    printf("\n--- Patient Details ---\n");
    for (int i = 0; i < n; i++)
    {
        printf("\nPatient %d:\n", i + 1);
        printf("Name    : %s\n", p[i].Name);
        printf("Age     : %d\n", p[i].age);
        printf("Disease : %s\n", p[i].disease);
        printf("Room No : %d\n", p[i].roomNumber);
    }
}

int searchPatientsBydisease(Patient *p, int n, const char *disease)
{
    int found = 0;
    printf("\n--- Patients with Disease: %s ---\n", disease);
    for (int i = 0; i < n; i++)
    {
        if (strcmp(p[i].disease, disease) == 0)
        {
            printf("\nPatientName : % s , Age : %d , Disease : %s , Room No : %d\n", p[i].Name, p[i].age, p[i].disease, p[i].roomNumber);
            found = 1;
        }
    }
    return found;
}

int main()
{

    int n;
    printf("Enter the number of patients :");
    scanf("%d", &n);

    Patient *patiens = (Patient *)malloc(n * sizeof(Patient));

    if (patiens == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    inputPatients(patiens, n);
    displayPatients(patiens, n);

    printf("\n--- Patient Details Stored Successfully in Disk ---\n");

    char *disease = (char *)malloc(50 * sizeof(char));
    if (disease == NULL){
        printf("Memory allocation for disease failed!\n");
        free(patiens); // Free the allocated memory before exiting
        return 1;
    }
    printf("Enter the disease to search for patients: ");
    scanf("%s", disease); // Using %s to read a string input for disease

    searchPatientsBydisease(patiens, n, disease);


    free(patiens);  // Free the allocated memory
    patiens = NULL; // Set pointer to NULL after freeing

    printf("\n Patient details have been successfully recorded and displayed.\n");

    return 0;
}