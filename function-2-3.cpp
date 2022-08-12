#include <stdio.h>

bool is_array_palindrome(int integers[], int length);
int sum_integers(int integers[], int length);

int palindrome_sum(int integers[], int length) {
  if (length < 1) {
    return -1;
  } else if (is_array_palindrome(integers, length) == false) {
    return -2;
  } else {
    return sum_integers(integers, length);
  }
}

bool is_array_palindrome(int integers[], int length) { return true; }

int sum_integers(int integers[], int length) {
  int sum = 0;
  for (int i = 0; i < length; i++) {
    sum += integers[i];
  }

  return sum;
}