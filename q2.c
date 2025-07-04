/*
Create a structure Employee with a nested Address structure.
Take input for multiple employees and print only those from "Kolkata".
*/

#include <stdio.h>
#include <string.h>

typedef struct
{
    char city[20];
    char state[20];
    int pin;
} Address;

// Main structure: Employee
typedef struct
{
    int id;
    char name[50];
    float salary;
    Address address; // Nested struct
} Employee;

// Function to take input
void inputEmployees(Employee emp[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\n📝 Enter details for Employee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &emp[i].id);
        printf("Name: ");
        scanf("%s", emp[i].name); // Arrays (especially char[]) already act like pointers, so you don’t need &.
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
        printf("City: ");
        scanf("%s", emp[i].address.city);
        printf("State: ");
        scanf("%s", emp[i].address.state);
        printf("PIN: ");
        scanf("%d", &emp[i].address.pin);
    }
}

void printKolkatalEmployees(Employee emp[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (strcmp(emp[i].address.city, "kolkata") == 0)
        {
            printf("\n📋 Employee %d Details:\n", i + 1);
            printf("ID: %d\n", emp[i].id);
            printf("Name: %s\n", emp[i].name);
            printf("Salary: %.2f\n", emp[i].salary);
            printf("City: %s\n", emp[i].address.city);
            printf("State: %s\n", emp[i].address.state);
            printf("PIN: %d\n", emp[i].address.pin);
        }
    }
}

int main()
{

    int n;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    Employee employees[n]; // Array of structures

    inputEmployees(employees, n); // Input phase
    printf("\n Employees from Kolkata:\n");
    printKolkatalEmployees(employees, n);
    return 0;
}