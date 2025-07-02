#include <stdio.h>

// ACSII values for lowercase and uppercase letters
//  'A' = 65, 'Z' = 90
//  'a' = 97, 'z' = 122
// special characters like '!' = 33, '@' = 64, '#' = 35, '$' = 36, etc.
// Numbers '0' = 48, '9' = 57

char toUpperCase(char c)
{
    if (c >= 97 && c <= 122)
    {
        // USING ASCII values to convert lowercase to uppercase
        return c - 32; // 'a' - 'A' = 32
    }
}

int main()
{
    // Q1. Print A to Z using a loop
    for (int i = 0; i < 26; i++)
    {
        printf("%c", 'A' + i);
        printf("\n");
    }
    /*
        OR
        for (char c = 'A'; c <= 'Z'; c++){
            printf("%c\n", c);
        }

    */

    // Convert a lowercase letter to uppercase
    char lower = 'b';
    char upper = toUpperCase(lower);
    if (upper)
    {
        printf("Uppercase of %c is %c\n", lower, upper);
    }

    // Check if a character is a digit using ASCII values
    char digit = '5';
    if (digit >= 48 && digit <= 57)
    {
        printf("%c is a digit\n", digit);
    }

    // q.Count vowels in a string

    char str[] = "Hello World!";
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        char c = str[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        {
            count++;
        }
    }
    printf("Number of vowels in '%s': %d\n", str, count);

    /*
    Q5. Identify character type
    Take input and determine whether the character is:

    Uppercase

    Lowercase

    Digit

    Special character

    📌 Hint: Use ASCII ranges:

    'A' to 'Z' → 65–90

    'a' to 'z' → 97–122

    '0' to '9' → 48–57


    */

    char inputChar;
    printf("Enter a character: ");
    scanf(" %c", &inputChar);
    if (inputChar >= 'A' && inputChar <= 'Z') // ASCII values for uppercase letters 65 to 90
    {
        printf("%c is an uppercase letter.\n", inputChar);
    }

    else if (inputChar >= 'a' && inputChar <= 'z') // ASCII values for lowercase letters 97 to 122
    {
        printf("%c is a lowercase letter.\n", inputChar);
    }

    else if (inputChar >= '0' && inputChar <= '9') // ASCII values for digits 48 to 57
    {
        printf("%c is a digit.\n", inputChar);
    }
    else 
    {
        printf("%c is a special character.\n", inputChar);
    }






    return 0;
}