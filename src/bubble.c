#include "../headers/bubble.h"
#include <stddef.h>

#include <stdio.h>
#include <stdlib.h>

#include <time.h>

void bubblesort(array arr) {
  int *pntrlow = malloc(sizeof(int));
  int *pntrhigh = malloc(sizeof(int));

  int i;

  for (i = 0; i < SIZE - 1; i++) {
    bool succes = false;
    for (int j = 0; j < SIZE - 1; j++) {
      *pntrlow = arr[j];
      *pntrhigh = arr[j + 1];
      if (*pntrhigh < *pntrlow) {
        arr[j] = *pntrhigh;
        arr[j + 1] = *pntrlow;
        succes = true;
        printarray(arr);
      }
    }
    if (!succes) {
      free(pntrhigh);
      free(pntrlow);
      break;
    }
  }
}

void scramble(array arr) {
  srand(time(NULL));
  for (int i = 0; i < SIZE; i++) {
    arr[i] = rand() % 30;
  }
}

void printarray(array array) {
  for (int i = 0; i < SIZE; i++) {

    printf("%d ", array[i]);
  }

  puts("");
}
