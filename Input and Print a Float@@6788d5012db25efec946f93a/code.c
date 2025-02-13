#include <stdio.h>

int main() {
  float num;

  printf("Enter a floating-point number: ");
  scanf("%f", &num);

  printf("%f\n", num); // Print only the float value

  return 0;
}