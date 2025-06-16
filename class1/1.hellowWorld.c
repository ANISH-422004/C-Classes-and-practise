#include <stdio.h>


#define DEBUG   // Simulate a debug flag like process.env.DEBUG=true

int main() {
    
#ifdef DEBUG
    printf("Debug mode ON\n");
#else
    printf("Debug mode OFF\n");
#endif

#ifndef RELEASE
    printf("This is not a release build\n");
#endif

#if 1
    printf("This block always prints\n");
#elif DEBUG
    printf("DEBUG was defined (elif)\n");
#endif

printf("hello world");
    return 0;
}



