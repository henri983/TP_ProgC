#include <stdio.h>

int main(void) {
    int num1 = 10;
    int num2 = 5;
    char op = '+';

    switch (op) {
        case '+':
            printf("%d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%d * %d = %d\n", num1, num2, num1 * num2);
            break;
        case '/':
            printf("%d / %d = %.2f\n", num1, num2, (double)num1 / num2);
            break;
        case '%':
            printf("%d %% %d = %d\n", num1, num2, num1 % num2);
            break;
        case '&':
            printf("%d & %d = %d\n", num1, num2, num1 & num2);
            break;
        case '|':
            printf("%d | %d = %d\n", num1, num2, num1 | num2);
            break;
        case '~':
            printf("~%d = %d\n", num1, ~num1);
            break;
        default:
            printf("Operateur invalide.\n");
            break;
    }

    return 0;
}

