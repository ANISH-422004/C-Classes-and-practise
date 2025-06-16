# include <stdio.h>


int main(){
    // rectangle hard coded
    // int l = 3;
    // float b = 2.5;
    // printf("The area of Rectangle %f \n " , l*b);


    // reactangle form user Input 
    int a, b;

    // Ask the user for input
    printf("Enter length: ");
    scanf("%d", &a);  // store input into variable a

    printf("Enter breadth: ");
    scanf("%d", &b);  // store input into variable b

    // Calculate and print area
    int area = a * b;
    printf("Area of rectangle is: %d\n", area);

    return 0;
}


