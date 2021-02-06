#include <stdio.h>

int stringSize(char *string) {
  int stringSize = -1;
  while (string[stringSize] != '\0')
    stringSize++;
  return stringSize;
}

int isPalindrome(char *string, int leftChar, int rightChar) {
  if (string[leftChar] != string[rightChar])
    return 0;
  if (rightChar >= leftChar)
    return 1;
  return isPalindrome(string, leftChar + 1, rightChar - 1);
}

int main(int argc, char const *argv[]) {
  char palindrome1[] = "ARARA";
  char palindrome2[] = "C";
  char palindrome3[] = "SOPAPOS";
  char notPalindrome1[] = "PALAVRAS";
  char notPalindrome2[] = "231@DSF";

  isPalindrome(palindrome1, 0, stringSize(palindrome1)) ? printf("YES\n") : printf("NO\n");
  isPalindrome(palindrome2, 0, stringSize(palindrome2)) ? printf("YES\n") : printf("NO\n");
  isPalindrome(palindrome3, 0, stringSize(palindrome3)) ? printf("YES\n") : printf("NO\n");
  isPalindrome(notPalindrome1, 0, stringSize(notPalindrome1)) ? printf("YES\n") : printf("NO\n");
  isPalindrome(notPalindrome2, 0, stringSize(notPalindrome2)) ? printf("YES\n") : printf("NO\n");

  return 0;
}
