#include <stdio.h>
#include <string.h>

void reverse(char s[]);

int main() {
    char str[] = "hello";
    reverse(str);
    printf("%s\n", str);

    return 0;
}

void reverse(char s[]) {
    int len = strlen(s);
    char scopy[len];
    strcpy(scopy, s);
    printf("copy: (%s)\n", scopy);
    int j = 0;
    for(int i = len-1; i >= 0; i--) {
        s[j] = scopy[i];
        j++;
    }
}
