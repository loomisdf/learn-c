#include <stdio.h>

float far2cel(int fahr);

int main()
{
    float fahr;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    // Print heading
    printf("┌────┬──────┐\n");
    printf("│%4s│%6s│\n", "fahr", "cels");

    fahr = lower;
    while(fahr <= upper) {
        printf("│%4.0f│%6.1f│\n", fahr, far2cel(fahr));
        fahr = fahr + step;
    }
    printf("└────┴──────┘\n");
    return 0;
}

float far2cel(int fahr) {
    return (5.0/9.0) * (fahr-32.0);
}
