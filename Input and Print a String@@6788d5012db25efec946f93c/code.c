#include <stdio.h>

int main() {
    char str[100]; // Declare a character array (string) with a maximum size of 99 characters + null terminator

    scanf("%99s", str); // Read a single word (string) using %s format specifier, limiting to 99 characters to prevent buffer overflow

    printf("%s\n", str); // Print the string followed by a newline

    return 0;
}