#include <stdio.h>
#include <ctype.h>
int main() {
    char ch;
    while ((ch = getchar()) != EOF) {
        if (isspace(ch))
            continue;
        if (ch == '/') {
            char next = getchar();
            if (next == '/') {
                while ((ch = getchar()) != '\n');
                continue;
            }
            else {
                putchar(ch);
                ungetc(next, stdin);
            }
        }
        else
            putchar(ch);
    }
    return 0;
}

