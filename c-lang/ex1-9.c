#include <stdio.h>

int main() {
    int c = 0;
    int prev = 0;

    while((c = getchar()) != EOF) {
        if(prev == ' ' && c == ' ') {
            continue;
        }
        putchar(c);
        prev = c;
    }

    return 0;
}
