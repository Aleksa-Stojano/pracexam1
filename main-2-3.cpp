#include <stdio.h>

extern int bin_to_int(int binary_digits[], int number_of_digits);

int main() {
  int array1[30] = {0};
  printf("%d", bin_to_int(array1, 0));
  return 0;
}