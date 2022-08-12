#include <stdio.h>

void print_matrix(int array[10][10]) {
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if (j == 9) {
        printf("%d\n", array[i][j]);
      } else {
        printf("%d ", array[i][j]);
      }
    }
  }
  return;
}