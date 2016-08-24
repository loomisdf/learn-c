#include <stdio.h>

#define MAX_LENGTH 9

int main() {
    int len = 0;
    int c = 0;
    int lengths[MAX_LENGTH];

    for(int i = 0; i < MAX_LENGTH; i++) {
        lengths[i] = 0;
    }

    while((c = getchar()) != EOF) {
        if(c == ' ' || c == '\n') {
            // if length is greater than the max
            if(len > MAX_LENGTH) {
                lengths[MAX_LENGTH - 1]++;
            }
            // add to a length
            else {
                lengths[len]++;
            }
            len = 0;
        }
        else {
            len++;
        }

        if(c == '\n') {
            // Print a histogram
            printf("Histogram\n");
            for(int i = 0; i < MAX_LENGTH; i++) {
                int cur_length = lengths[i];
                printf("%d|", i);
                for(int l = 0; l < cur_length; l++) {
                    printf("-");
                }
                printf("\n");
            }
        }
    }

    return 0;
}
