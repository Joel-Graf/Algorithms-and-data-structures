#include <stdio.h>

#include "minunit.h"
#include "palindrome.h"

int tests_run = 0;

static char *stringLastIndexValid() {
  char palindrome[] = "0123456";
  int result = stringLastIndex(palindrome);
  mu_assert("Error: result != 6", result == 6);
  return 0;
}

static char *palindromeWithAlternadeCaps() {
  char palindrome[] = "SaAs";
  int result = isPalindrome(palindrome, 0, stringLastIndex(palindrome));
  mu_assert("Error: result != 1", result == 1);
  return 0;
}

static char *palindromeAllCaps() {
  char palindrome[] = "SOPAPOS";
  int result = isPalindrome(palindrome, 1, stringLastIndex(palindrome) - 1);
  mu_assert("Error: result != 1", result == 1);
  return 0;
}

static char *palindromeWithSpaces() {
  char palindrome[] = "A RAR A";
  int result = isPalindrome(palindrome, 0, stringLastIndex(palindrome));
  mu_assert("Error: result != 1", result == 1);
  return 0;
}

static char *palindromeWithOneLetter() {
  char palindrome[] = "C";
  int result = isPalindrome(palindrome, 0, stringLastIndex(palindrome));
  mu_assert("Error: result != 1", result == 1);
  return 0;
}

static char *nonPalindrome() {
  char nonPalindrome[] = "PALaVr4s";
  int result = isPalindrome(nonPalindrome, 0, stringLastIndex(nonPalindrome));
  mu_assert("Error: result != 0", result == 0);
  return 0;
}

static char *nonPalindromeWithSpaces() {
  char nonPalindrome[] = "A RA RA";
  int result = isPalindrome(nonPalindrome, 0, stringLastIndex(nonPalindrome));
  mu_assert("Error: result != 0", result == 0);
  return 0;
}

static char *nonPalindromeWithTwoLetters() {
  char nonPalindrome[] = "IO";
  int result = isPalindrome(nonPalindrome, 0, stringLastIndex(nonPalindrome));
  mu_assert("Error: result != 0", result == 0);
  return 0;
}

static char *all_tests() {
  mu_run_test(palindromeWithAlternadeCaps);
  mu_run_test(palindromeAllCaps);
  mu_run_test(palindromeWithSpaces);
  mu_run_test(palindromeWithOneLetter);
  mu_run_test(nonPalindrome);
  mu_run_test(nonPalindromeWithSpaces);
  mu_run_test(nonPalindromeWithTwoLetters);
  mu_run_test(stringLastIndexValid);
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