#include <stdio.h>

#define LOWER   0
#define UPPER   300
#define STEP    20

int main()
{
    float fahr;

    // Print heading
    printf(" %4s %6s\n", "fahr", "cels");

    for(fahr = UPPER; fahr >= LOWER; fahr -= STEP) {
        printf("│%4.0f│%6.1f│\n", fahr, (5.0/9.0) * (fahr-32.0));
    }
    return 0;
}
