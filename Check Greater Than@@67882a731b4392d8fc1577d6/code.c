#include <stdio.h>

int main() {
    int num1, num2;

    scanf("%d %d", &num1, &num2);

    printf("Output\n"); // Print "Output" followed by a newline

    if (num1 > num2) {
        printf("True"); // No newline after "True"
    } else {
        printf("False"); // No newline after "False"
    }

    return 0;
}