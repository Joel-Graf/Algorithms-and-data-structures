#include <stdio.h>

#include "factorial.h"
#include "minunit.h"

int tests_run = 0;

static char *positiveInteger() {
  int positiveInteger = 5;
  int result = factorial(positiveInteger);
  mu_assert("Error: factorial(5) != 120", result == 120);
  return 0;
}

static char *negativeInteger() {
  int negativeInteger = -3;
  int result = factorial(negativeInteger);
  mu_assert("Error: factorial(-3) != 1", result == 1);
  return 0;
}

static char *all_tests() {
  mu_run_test(positiveInteger);
  mu_run_test(negativeInteger);
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