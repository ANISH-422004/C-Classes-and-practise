# include <stdio.h>


int main(){
    // rectangle hard coded
    // int l = 3;
    // float b = 2.5;
    // printf("The area of Rectangle %f \n " , l*b);


    // reactangle form user Input 
    // int a, b;

    // printf("Enter length: ");
    // scanf("%d", &a);  

    // printf("Enter breadth: ");
    // scanf("%d", &b); 

    // int area = a * b;
    // printf("Area of rectangle is: %d\n", area);


    // A program to convert Celsius to Fahrenheit formula ( F = C * 9/5 + 32 )
    // float c, f;

    // printf("celsius: ");
    // scanf("%f" , &c);
    // f = c * 9 / 5 + 32;
    // printf("Fahrenheit: %f\n", f);




    //Simple interest formula ( SI = P * R * T / 100 )
    float p, r, t, si; 
    printf("Enter principal amount: ");
    scanf("%f", &p);
    printf("Enter rate of interest: ");
    scanf("%f", &r);
    printf("Enter time in years: ");
    scanf("%f", &t);
    si = (p * r * t) / 100;
    printf("Simple Interest: %f\n", si);

    


    return 0;
}


