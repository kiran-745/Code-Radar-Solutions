#include <stdio.h>

int main() {
    float radius, area;
    const float PI = 3.14; // Define PI as a constant

    scanf("%f", &radius); // Read the radius

    area = PI * radius * radius; // Calculate the area

    printf("%.2f\n", area); // Print the area with two decimal places and a newline

    return 0;
}