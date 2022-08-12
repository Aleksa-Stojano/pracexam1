#include <stdio.h>

int bin_to_int(int binary_digits[], int number_of_digits) {
  int decimal = 0;
  int power = 1;

  for (int i = 1; i < number_of_digits; i++) {
    power = power * 2;
  }

  for (int i = 0; i < number_of_digits; i++) {
    decimal += binary_digits[i] * power;
    power = power / 2;
    // printf("%d\n", decimal);
    // printf("%d\n", binary_digits[i]);
    // printf("%d\n", power);
  }

  return decimal;
}