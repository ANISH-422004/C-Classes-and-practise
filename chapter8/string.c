/*
    string in c :
    1. String is an array of characters.
    2. String is a sequence of characters terminated by a null character '\0'.
    3. String is a data type in C.
    4. String is a collection of characters.
    5. String is a sequence of characters that can be stored in an array.
    6. String is a sequence of characters that can be manipulated using string functions.


    Syntax :

    char array_name[size_of_array] = {'c', 'h', 'a', 'r', '\0'};
    char array_name[size_of_array] = "string"; // string literal



*/

#include <stdio.h>
#include <string.h>

int main()
{

    char str1[20] = "HelloGeeks";
    char str2[20] = {'H', 'e', 'l', 'l', 'o', 'G', 'e', 'e', 'k', 's', '\0'};

    printf("My string is : %s\n", str1);
    printf("My string is : %s\n", str2);

    for(int i = 0 ; i < 20 ; i++){
        printf("%c \n" , str1[i]);
    };

    // printing string using %s
    printf("My string is : %s\n", str1); 

    //scanf with the string : add \0 (null character) at the end of the string when enter is pressed 

    char str3[20];
    printf("Enter a string: ");
    scanf("%s", str3);
    printf("You entered: %s\n", str3);


    /*
        String methods in C :
        1. strlen() : returns the length of the string.
        2. strcpy() : copies the string from source to destination.
        3. strcat() : concatenates two strings.
        4. strcmp() : compares two strings.
        5. strchr() : finds the first occurrence of a character in a string.
        6. strrchr() : finds the last occurrence of a character in a string.
        7. strstr() : finds the first occurrence of a substring in a string.
    */
    // usage
    char str4[20] = "Hello";
    char str5[20] = "World";
    printf("Length of str4: %zu\n", strlen(str4)); // length of string
    printf("Length of str5: %zu\n", strlen(str5)); // length of string
    strcpy(str4, str5); // copy str5 to str4
    printf("After copying, str4: %s\n", str4); // str4 is now "World"
    strcat(str4, str5); // concatenate str5 to str4
    printf("After concatenation, str4: %s\n", str4); // str4 is now "WorldWorld"
    int cmp_result = strcmp(str4, str5); // compare str4 and str5
    if (cmp_result == 0) {
        printf("str4 and str5 are equal.\n");
    } else if (cmp_result < 0) {
        printf("str4 is less than str5.\n");
    } else {
        printf("str4 is greater than str5.\n");
    }
    char *first_occurrence = strchr(str4, 'o'); // find first occurrence of 'o'
    if (first_occurrence) {
        printf("First occurrence of 'o' in str4: %s\n", first_occurrence);
    } else {
        printf("'o' not found in str4.\n");
    }   

    return 0;
};