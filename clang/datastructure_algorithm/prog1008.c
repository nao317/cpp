/* prog1008.c */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "sorts.h"

#define SIZE 100000000

int main(void) {
  clock_t t1,t2;
  int n;
  static double static_double[SIZE];

  printf("static: %p-%p (%d)\n", static_double, &static_double[SIZE-1], SIZE);
  for ( n = SIZE; n >=100; n /= 10) {
    if (n <= 100000000) {
      printf("quick sort (%d): ", n);
      init_array( static_double, n);
      /* print_array( static_double, 0, 9); */
      t1 = clock();
      quick_sort( static_double, n);
      t2 = clock();
      printf("%f[ms]\n", (double)(t2-t1)/CLOCKS_PER_SEC*1000);
      /* print_array( static_double, 0, 9); */
    } else {
      printf("quick sort (%d): XXX\n", n);
    }
    if (n <= 100000) {
      printf("insertion sort (%d): ", n);
      init_array( static_double, n);
      /* print_array( static_double, 0, 9); */
      t1 = clock();
      insertion_sort( static_double, n);
      t2 = clock();
      printf("%f[ms]\n", (double)(t2-t1)/CLOCKS_PER_SEC*1000);
      /* print_array( static_double, 0, 9); */
    } else {
      printf("insertion sort (%d): XXX\n", n);
    }
  }
  return 0;
}
