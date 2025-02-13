#include <stdio.h>

int main() {
    int num1, num2;

    scanf("%d %d", &num1, &num2);

    printf("Output\n"); // Print "Output" followed by a newline

    if (num1 >= num2) {
        printf("True"); // Print "True" WITHOUT a newline
    } else {
        printf("False"); // Print "False" WITHOUT a newline
    }

    return 0;
}