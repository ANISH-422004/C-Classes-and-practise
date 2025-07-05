#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char Name[50];
    int mobileNumber;
    char email[50];

} Contact;

void inputContacts(Contact contacts[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter details for Contact %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", contacts[i].Name);
        printf("Mobile Number: ");
        scanf("%d", &contacts[i].mobileNumber);
        printf("Email: ");
        scanf("%s", contacts[i].email);
    }
}

void displayContacts(Contact *c, int n)
{
    printf("\n-- Contact List --\n");
    for (int i = 0; i < n; i++)
    {
        printf("\nName: %s\nMobile: %s\nEmail: %s\n", c[i].Name, c[i].mobileNumber, c[i].email);
    }
}

void searchContactsByName(Contact *c, int n)
{
    char name[50];
    printf("Enter the name to search: ");
    scanf("%s", name);

    int found = 0;

    for (int i = 0; i < n; i++)
    {
        if (strcmp(c[i].Name, name) == 0)
        {
            printf("\nContact Found:\n");
            printf("Name: %s\nMobile: %d\nEmail: %s\n", c[i].Name, c[i].mobileNumber, c[i].email);
            found = 1;
            return; // Exit after finding the first match
        }
    }

    if (!found)
    {
        printf("Contact with name '%s' not found.\n", name);
    }
}

void updateContact(Contact *c, int n)
{
    char key[50];
    int found = 0;
    printf("\nEnter name to update: ");
    scanf(" %[^\n]", key);
    for (int i = 0; i < n; i++)
    {
        if (strcmp(c[i].Name, key) == 0)
        {
            printf("Enter new mobile: ");
            scanf(" %[^\n]", c[i].mobileNumber);
            printf("Enter new email: ");
            scanf(" %[^\n]", c[i].email);
            printf("Updated successfully.\n");
            found = 1;
            break;
        }
    }
    if (!found)
        printf("Contact not found!\n");
}

void deleteContact(Contact *contacts, int *n)
{
    char name[50];
    printf("Enter the name of the contact to delete: ");
    scanf(" %[^\n]", name);

    int found = 0;
    for (int i = 0; i < *n; i++)
    {
        if (strcmp(contacts[i].Name, name) == 0)
        {
            for (int j = i; j < *n - 1; j++)
            {
                contacts[j] = contacts[j + 1];
            }
        }
        (*n)--; // Decrease the count of contacts
        printf("Contact '%s' deleted successfully.\n", name);
        found = 1;
        break;
    }

    if (!found)
    {
        printf("Contact with name '%s' not found.\n", name);
    }
}

int main()
{

    int n;
    printf("Enter the number of patients: ");
    scanf("%d", &n);
    int found = 0;
    Contact *contacts = (Contact *)malloc(n * sizeof(Contact));

    if (contacts == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1; // Exit if memory allocation fails
    }

    inputContacts(contacts, n);
    displayContacts(contacts, n);
    printf("\n--- Contact Details Stored Successfully in Disk ---\n");
    searchContactsByName(contacts, n);
    updateContact(contacts, n);
    deleteContact(contacts, &n);
    printf("\n--- Contact Details After Deletion ---\n");
    displayContacts(contacts, n);
    free(contacts);  // Free the allocated memory
    contacts = NULL; // Set pointer to NULL after freeing

    printf("\nContact details have been successfully recorded and displayed.\n");
    
    
    return 0;
}