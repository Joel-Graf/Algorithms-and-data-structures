#include <stdio.h>
#include <ctype.h>

int stringLastIndex(char *string) {
  int stringLastIndex = 0;
  while (string[stringLastIndex] != '\0')
    stringLastIndex++;
  return --stringLastIndex;
}

int isPalindrome(char *string, int leftChar, int rightChar) {
  if (tolower(string[leftChar]) != tolower(string[rightChar]))
    return 0;
  if (rightChar - leftChar > 1)
    return isPalindrome(string, leftChar + 1, rightChar - 1);
  return 1;
}
