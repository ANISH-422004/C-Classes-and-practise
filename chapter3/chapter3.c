#include <stdio.h>

void checkResult(float sub1, float sub2, float sub3)
{
    float total = (sub1 + sub2 + sub3) / 3.0;

    // Check individual subject criteria
    if (sub1 < 33 || sub2 < 33 || sub3 < 33)
    {
        printf("❌ Failed: Scored less than 33 in one or more subjects.\n");
    }
    // Check overall average
    else if (total < 40)
    {
        printf("❌ Failed: Average is below 40%%. Your average: %.2f%%\n", total);
    }
    else
    {
        printf("✅ Passed! 🎉 Total Average: %.2f%%\n", total);
    }
}



// Function to calculate tax based on income
float calculateTax(float income) {
    float tax = 0;

    if (income <= 2.5) { // 2.5l free
        tax = 0;
    } 
    else if (income <= 5.0) {  // 5 - 2.5 = 2.5l
        tax = (income - 2.5) * 0.05;
    } 
    else if (income <= 10.0) {  // 10 - 5 = 5l
        tax = (2.5 * 0.05) + (income - 5.0) * 0.20;
    } 
    else {
        tax = (2.5 * 0.05) + (5.0 * 0.20) + (income - 10.0) * 0.30;
    }

    return tax;
}

int main()
{
    /*Write a program to determine whether a student has passed or failed. To pass, a
    student requires a total of 40% and at least 33% in each subject. Assume there
    are three subjects and take the marks as input from the user.*/
    // Function to check pass/fail

    float m1, m2, m3;

    // Taking input from user
    printf("Enter marks for Subject 1: ");
    scanf("%f", &m1);

    printf("Enter marks for Subject 2: ");
    scanf("%f", &m2);

    printf("Enter marks for Subject 3: ");
    scanf("%f", &m3);

    // Call the function
    checkResult(m1, m2, m3);




    /*
    You are taxed only on the part of income that falls in each slab:

    First ₹2.5L → 0%

    Next ₹2.5L (from ₹2.5L to ₹5L) → 5%

    Next ₹5L (from ₹5L to ₹10L) → 20%

    Remaining (above ₹10L) → 30%


    */

    return 0;
}