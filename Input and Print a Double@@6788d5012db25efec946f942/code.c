#include <stdio.h>

int main() {
    double num;

    scanf("%lf", &num); // Read the double

    printf("You entered: %.4lf\n", num); // Print with 4 decimal places

    return 0;
}