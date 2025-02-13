#include <stdio.h>

int main() {
    char name[100];
    int age;
    char hobby[100];

    scanf("%99s", name); // Read name (string)
    scanf("%d", &age);    // Read age (integer)
    scanf(" %99[^\n]", hobby); // Read hobby (string) - space is important!

    printf("%s\n", name); // Print name
    printf("\n");       // Print a blank line - THIS IS THE KEY!
    printf("%d\n", age);    // Print age
    printf("%s\n", hobby); // Print hobby

    return 0;
}