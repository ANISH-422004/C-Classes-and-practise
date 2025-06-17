#include <stdio.h>

int main()
{

    // while loop example

    int i = 0;
    while (i < 5)
    {
        printf("i printed: %d\n", i+1);
        i++ ; 
    };   

    // do-while loop example

    int j = 0;
    do
    {
        printf("j printed: %d\n", j+1);
        j++;
    }while(j < 5);

    // for loop example
    for (int k = 0; k < 5; k++)
    {
        printf("k printed: %d\n", k+1);
    };

    return 0;
}