#include <stdio.h>
int main() {
    char op;
    printf("Enter an operator: ");
    scanf("%c", &op);

    if (op == '+' || op == '-' || op == '*' || op == '/')
        printf("Valid arithmetic operator\n");
    else
        printf("Invalid operator\n");
    return 0;
}

