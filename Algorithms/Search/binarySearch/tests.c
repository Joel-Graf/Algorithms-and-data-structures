#include <stdio.h>

#include "binarySearch.h"
#include "minunit.h"

int tests_run = 0;

static char *palindromeWithAlternadeCaps() {
  char palindrome[] = "SaAs";
  int result = isPalindrome(palindrome, 0, stringLastIndex(palindrome));
  mu_assert("Error: result != 1", result == 1);
  return 0;
}

static char *all_tests() {
  // mu_run_test(palindromeWithAlternadeCaps);
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


  
  int arrayNums[] = {0, 3, 6, 9, 12, 15, 18, 21, 24, 27, 30, 33, 36, 39, 42, 45, 48, 51, 54, 57, 60, 63, 66, 69, 72, 75, 78, 81, 84, 87, 90, 93, 96, 99, 102, 105, 108, 111, 114, 117, 120, 123, 126, 129, 132, 135, 138, 141, 144, 147, 150, 153, 156, 159, 162, 165, 168, 171, 174, 177, 180, 183, 186, 189, 192, 195, 198, 201, 204, 207, 210, 213, 216, 219, 222, 225, 228, 231, 234, 237, 240, 243, 246, 249, 252, 255, 258, 261, 264, 267, 270, 273, 276, 279, 282, 285, 288, 291, 294, 297, 300, 303, 306, 309, 312, 315, 318, 321, 324, 327, 330, 333, 336, 339, 342, 345, 348, 351, 354, 357, 360, 363, 366};
  int sizeOfArrayNums = sizeof(arrayNums) / sizeof(int);
  int targetValue = 366;

  int resultado = binarySearch(arrayNums, sizeOfArrayNums, targetValue);
  printf("O número %d foi encontrado no índice: %d", targetValue, resultado);

  return result != 0;
}