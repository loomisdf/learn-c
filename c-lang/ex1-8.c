#include <stdio.h>

// hit ctrl-d to escape out of this program

int main() {
    int c, nl = 0, blanks = 0, tabs = 0;

    while((c = getchar()) != EOF)
    {
        if(c == '\n')
        {
            ++nl;
        }
        else if(c == ' ')
        {
            blanks++;
        }
        else if(c == '\t')
        {
            tabs++;
        }
    }
    printf("newlines = %d\nblanks = %d\ntabs = %d\n", nl, blanks, tabs);
}
