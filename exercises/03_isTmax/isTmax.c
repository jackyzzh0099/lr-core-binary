#include <stdio.h>

/*
 * isTmax - returns 1 if x is the maximum, two's complement number,
 *     and 0 otherwise
 *   Legal ops: ! ~ & ^ | +
 *   Max ops: 10
 *   Rating: 1
 */
int isTmax(int x) {

// #error TODO: Return 1 only when x is the maximum 32-bit two's-complement integer
  
  // if ((x+1)==(~x) && x!=-1)
  //   return 1;
  // else
  //   return 0;


  return !( ~(x + 1) ^ x ) & !!(x + 1);


}

int main(void) {
  int x;
  if (scanf("%d", &x) != 1)
    return 1;
  printf("%d\n", isTmax(x));
  return 0;
}
