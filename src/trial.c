#include "stdio.h"

// int fbar(int *a) {
//   *a = 7;
//   return 1;
// }

// int main() {
//   static int *b;
//   b = malloc(sizeof(int));

//   fbar(b);
//   printf("%d", *b);
// }

// int main() {
//   unsigned int n;
//   unsigned int *p1 = &n;
//   unsigned int *p2 = &n;
//   printf("%u\n", *p1);
//   static int *b = malloc(sizeof(*b));
//   n++;
//   printf("%u\n", *p2);
//   return 0;
// }
int inc(int n) { return ++n; }
int square(int n) { return n * n; }
int inc2(int n) { return n + 2; }
int inc3(int n) { return n + 3; }
int (*ops[])(int) = {inc, square, inc2, inc3};

int main() {
  for (int i = 0; i < 4; i++) {
    int bar = 2;
    bar = ops[i](bar);
    printf("%d\n", bar);
  }
  return 0;
}