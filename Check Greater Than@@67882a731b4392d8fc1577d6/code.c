#include <stdio.h>

int main() {
    int num1, num2;

    scanf("%d %d", &num1, &num2);

    if (num1 > num2) {
        printf("Output\nTrue"); // Include "Output" and a newline
    } else {
        printf("Output\nFalse"); // Include "Output" and a newline
    }

    return 0;
}