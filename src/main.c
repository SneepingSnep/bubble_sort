#include "../headers/bubble.h"
#include "stdbool.h"
#include <stddef.h>

#define arraySize 6
int farray[SIZE] = {};
int main() {

  // printf("broo");
  scramble(farray);
  printarray(farray);
  bubblesort(farray);
  printarray(farray);
  return 0;
}
