#include <stdio.h>

#include "util/util.h"

void insertSort(int *array);

int main(int argc, char const *argv[]) {
  runSortAll(insertSort);
  return 0;
}

void insertSort(int *array) {
  for (int i = 1; i < VECTOR_SIZE; i++) {
    for (int j = i; j > 0; j--) {
      if (array[j] < array[j - 1]) swap(&array[j], &array[j - 1]);
    }
  }
}