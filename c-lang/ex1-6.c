#include <stdio.h>

int main() {

    if((getchar() != EOF) == 0) {
        printf("getchar is 0");
    } else {
        printf("getchar is 1");
    }

    return 0;
}
