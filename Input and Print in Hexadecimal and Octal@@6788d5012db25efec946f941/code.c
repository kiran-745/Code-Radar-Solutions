#include <stdio.h>

int main() {
    int num;

    scanf("%d", &num);

    printf("Hexadecimal:%x\n", num); // No space after "Hexadecimal:"

    printf("Octal:%o\n", num);       // No space after "Octal:"

    return 0;
}