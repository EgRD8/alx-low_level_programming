#include "main.h"
#include <stdio.h>

void print_times_table(int n);
int main() {
  print_times_table(2);
  return 0;
}

void print_times_table(int n) {
  int i, result;
  for (i = 1; i <= 10; i++) {
    result = i * n;
    printf("%d ", result);
  }
  printf("\n");
}
