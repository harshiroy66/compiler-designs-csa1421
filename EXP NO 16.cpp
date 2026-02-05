#include <stdio.h>
#include <string.h>
int main() {
    char op, arg1, arg2, result;
    printf("Enter three address code (Example: a=b+c): ");
    scanf("%c=%c%c%c", &result, &arg1, &op, &arg2);
    printf("\nTarget Code:\n");
    printf("MOV %c, R1\n", arg1);
    switch (op) {
        case '+':
            printf("ADD %c, R1\n", arg2);
            break;
        case '-':
            printf("SUB %c, R1\n", arg2);
            break;
        case '*':
            printf("MUL %c, R1\n", arg2);
            break;
        case '/':
            printf("DIV %c, R1\n", arg2);
            break;
    }
    printf("MOV R1, %c\n", result);
    return 0;
}

