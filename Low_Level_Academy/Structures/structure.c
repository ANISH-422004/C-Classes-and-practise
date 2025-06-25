#include <stdio.h>
#include <stdbool.h>
#include <string.h>  // For strcpy

#define MAX_SIZE 20

struct employee {
    int id;
    char firstName[50];
    char lastName[50];
    float income;
    bool isManager;
};

int main() {
    struct employee Anish;

    Anish.id = 1;
    Anish.income = 1000.0;
    Anish.isManager = false;

    // ✅ Correct way to assign strings to character arrays
    strcpy(Anish.firstName, "Anish");
    strcpy(Anish.lastName, "Kumar");

    // Optional: Print to verify
    printf("ID: %d\n", Anish.id);
    printf("Name: %s %s\n", Anish.firstName, Anish.lastName);
    printf("Income: %.2f\n", Anish.income);
    printf("Manager: %s\n", Anish.isManager ? "Yes" : "No");

    return 0;
}
