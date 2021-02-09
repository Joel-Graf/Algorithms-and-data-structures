#include <stdio.h>

int stringLastIndex(char *string) {
  int stringLastIndex = 0;
  while (string[stringLastIndex] != '\0')
    stringLastIndex++;
  return --stringLastIndex;
}

int isPalindrome(char *string, int leftChar, int rightChar) {
  if (string[leftChar] != string[rightChar])
    return 0;
  if (rightChar - leftChar > 1)
    return isPalindrome(string, leftChar + 1, rightChar - 1);
  return 1;
}

int main(int argc, char const *argv[]) {
  char palindrome1[] = "A RAR A";
  char palindrome2[] = "C";
  char palindrome3[] = "SOPAPOS";
  char notPalindrome1[] = "PALAVR4S";
  char notPalindrome2[] = "A RA RA";
  char notPalindrome3[] = "IO";

  isPalindrome(palindrome1, 0, stringLastIndex(palindrome1)) ? printf("YES\n") : printf("NO\n");
  isPalindrome(palindrome2, 0, stringLastIndex(palindrome2)) ? printf("YES\n") : printf("NO\n");
  isPalindrome(palindrome3, 0, stringLastIndex(palindrome3)) ? printf("YES\n") : printf("NO\n");
  isPalindrome(notPalindrome1, 0, stringLastIndex(notPalindrome1)) ? printf("YES\n") : printf("NO\n");
  isPalindrome(notPalindrome2, 0, stringLastIndex(notPalindrome2)) ? printf("YES\n") : printf("NO\n");
  isPalindrome(notPalindrome3, 0, stringLastIndex(notPalindrome3)) ? printf("YES\n") : printf("NO\n");

  return 0;
}
