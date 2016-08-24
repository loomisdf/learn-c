#include <stdio.h>

int main() {
    int c = 0;

    while((c = getchar()) != EOF) {
        if(c == ' ') {
            putchar('\n');
        }
        else {
            putchar(c);
        }
    }
}
