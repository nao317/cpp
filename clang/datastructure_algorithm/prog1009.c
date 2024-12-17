/* prog1009.c */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "sorts.h"

#define SIZE 1000000

int main(void) {
  clock_t t1,t2;
  int n;
  double auto_double[SIZE];

  printf("auto: %p-%p (%d)\n", auto_double, &auto_double[SIZE-1], SIZE);
  for ( n = SIZE; n >=100; n /= 10) {
    if (n <= 100000000) {
      printf("quick sort (%d): ", n);
      init_array( auto_double, n);
      /* print_array( auto_double, 0, 9); */
      t1 = clock();
      quick_sort( auto_double, n);
      t2 = clock();
      printf("%f[ms]\n", (double)(t2-t1)/CLOCKS_PER_SEC*1000);
      /* print_array( auto_double, 0, 9); */
    } else {
      printf("quick sort (%d): XXX\n", n);
    }
    if (n <= 100000) {
      printf("insertion sort (%d): ", n);
      init_array( auto_double, n);
      /* print_array( auto_double, 0, 9); */
      t1 = clock();
      insertion_sort( auto_double, n);
      t2 = clock();
      printf("%f[ms]\n", (double)(t2-t1)/CLOCKS_PER_SEC*1000);
      /* print_array( auto_double, 0, 9); */
    } else {
      printf("insertion sort (%d): XXX\n", n);
    }
  }
  return 0;
}
