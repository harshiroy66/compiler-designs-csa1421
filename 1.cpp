#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char ch, buffer[50];
    int i = 0;

    while ((ch = getchar()) != EOF) {

        /* Ignore whitespace */
        if (isspace(ch))
            continue;

        /* Ignore single-line comments */
        if (ch == '/') {
            char next = getchar();
            if (next == '/') {
                while ((ch = getchar()) != '\n');
                continue;
            }
            else {
                printf("Operator: /\n");
                ungetc(next, stdin);
            }
        }

        /* Identifier */
        if (isalpha(ch) || ch == '_') {
            buffer[i++] = ch;
            while (isalnum(ch = getchar()) || ch == '_')
                buffer[i++] = ch;
            buffer[i] = '\0';
            i = 0;
            printf("Identifier: %s\n", buffer);
            ungetc(ch, stdin);
        }

        /* Constant */
        else if (isdigit(ch)) {
            buffer[i++] = ch;
            while (isdigit(ch = getchar()))
                buffer[i++] = ch;
            buffer[i] = '\0';
            i = 0;
            printf("Constant: %s\n", buffer);
            ungetc(ch, stdin);
        }

        /* Operator */
        else if (strchr("+-*/=", ch)) {
            printf("Operator: %c\n", ch);
        }
    }
    return 0;
}

