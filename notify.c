#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int error = 0;
    error = system("notify-send \"hello world\"");
    if(error != 0) {
        printf("%d\n", error);
    }
    return 0;
}
