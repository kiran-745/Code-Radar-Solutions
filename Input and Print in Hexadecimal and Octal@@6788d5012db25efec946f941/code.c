#include <stdio.h>

int main() {
    int num;

    scanf("%d", &num);

    printf("Hexadecimal:%x\n", num); // Lowercase hexadecimal, no space

    printf("Octal:%o\n", num);       // Octal, no space

    return 0;
}