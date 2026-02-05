#include <stdio.h>
int main() {
    char ch;
    int spaces = 0, newlines = 0;
    printf("Enter text (Press ENTER twice to stop):\n");
    while (1) {
        ch = getchar();
        if (ch == '\n') {
            newlines++;
            if ((ch = getchar()) == '\n')
                break;
            else
                ungetc(ch, stdin);
        }
        else if (ch == ' ') {
            spaces++;
        }
    }
    printf("\nSpaces    : %d", spaces);
    printf("\nNew lines : %d", newlines);
    return 0;
}

