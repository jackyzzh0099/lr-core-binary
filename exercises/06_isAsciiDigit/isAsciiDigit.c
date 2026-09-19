#include <stdio.h>

/*
 * isAsciiDigit - return 1 if 0x30 <= x <= 0x39 (ASCII codes for characters '0'
 * to '9') Example: isAsciiDigit(0x35) = 1. isAsciiDigit(0x3a) = 0.
 *            isAsciiDigit(0x05) = 0.
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 15
 *   Rating: 3
 */
int isAsciiDigit(int x) {
// #error TODO: Return 1 when x is between 0x30 and 0x39 inclusive.
  // return ((x + (~0x39 + 1)) >> 31) & !((x + (~0x30 + 1)) >> 31);
  // int msak1 = 0x30 ;
  // int mask2 = 0x39 ;
  // int a = 1 << 31;


  return !((x + (~0x30 +1)) & (1 << 31)) & !((0x39 + (~x +1)) & (1 << 31));
  // return !(((x + (~0x30 +1)) & (1 << 31)) | ((0x39 + (~x +1)) & (1 << 31)));

}

int main(void) {
  int x;
  if (scanf("%d", &x) != 1)
    return 1;
  printf("%d\n", isAsciiDigit(x));
  return 0;
}
