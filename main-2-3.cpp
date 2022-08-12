#include <stdio.h>

extern int palindrome_sum(int integers[], int length);

int main() {
  int array1[4] = {1, 2, 2, 1};
  printf("%d", palindrome_sum(array1, 4));
  return 0;
}