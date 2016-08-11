#include <stdio.h>

int power(int base, int i) {
    if(i == 1) {
        return base;
    }
    else {
        return base * power(base, i - 1);
    }
}

int main() {
    printf("%d\n", power(2, 2));
}
