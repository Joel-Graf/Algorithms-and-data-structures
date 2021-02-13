#include <stdio.h>

#include "binarySearch.h"
#include "minunit.h"

int tests_run = 0;

static char *binarySearchFirstPosition() {
  int arrayNums[] = {0, 3, 6, 9, 12, 1, 8, 2, 24, 17, 0, 13};
  int sizeOfArrayNums = sizeof(arrayNums) / sizeof(int);
  int targetValue = 0;
  int result = binarySearch(arrayNums, sizeOfArrayNums, targetValue);
  mu_assert("Error: result != 0", result == 0);
  return 0;
}

static char *binarySearchMiddlePosition() {
  int arrayNums[] = {0, 3, 6, 9, 12, 1, 8, 2, 24, 17, 0, 13};
  int sizeOfArrayNums = sizeof(arrayNums) / sizeof(int);
  int targetValue = 8;
  int result = binarySearch(arrayNums, sizeOfArrayNums, targetValue);
  mu_assert("Error: result != 6", result == 6);
  return 0;
}

static char *all_tests() {
  mu_run_test(binarySearchFirstPosition);
  mu_run_test(binarySearchMiddlePosition);
  return 0;
}

int main(int argc, char **argv) {
  char *result = all_tests();
  if (result != 0) {
    printf("%s\n", result);
  } else {
    printf("ALL TESTS PASSED\n");
  }
  printf("Tests run: %d\n", tests_run);

  return result != 0;
}