#include <stdio.h>

/*
 * isLessOrEqual - if x <= y then return 1, else return 0
 *   Example: isLessOrEqual(4,5) = 1.
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 24
 *   Rating: 3
 */
int isLessOrEqual(int x, int y) {
// #error TODO: Return 1 when x is less than or equal to y.
  // return !!((x + (~y + 1)) & (1 << 31)) | !(y + (~x +1) & (1 << 31));
  return ((!!(x & (1 << 31))) & !(y & (1 << 31))) | !((x + (~y +1)) | 0) | !!((x + (~y +1)) & (1 << 31));
}

int main(void) {
  int x, y;
  if (scanf("%d %d", &x, &y) != 2)
    return 1;
  printf("%d\n", isLessOrEqual(x, y));
  return 0;
}
