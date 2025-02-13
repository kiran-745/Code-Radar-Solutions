#include <stdio.h>

int main() {
  float num;

  // Prompt the user to enter a floating-point number
  printf("Enter a floating-point number: ");

  // Read the floating-point number from the user
  scanf("%f", &num);

  // Print the entered floating-point number
  printf("You entered: %.2f\n", num); // %.2f formats to two decimal places

  return 0;
}