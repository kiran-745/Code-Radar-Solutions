#include <stdio.h>

int main() {
    char str1[100];
    char str2[100];

    scanf("%99s %99s", str1, str2); // Read two strings

    printf("You entered: %s and %s\n", str1, str2); // Format with "and" and spaces

    return 0;
}