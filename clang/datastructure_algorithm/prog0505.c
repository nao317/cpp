/* prog0505.c */
#include <stdio.h>
#include <stdlib.h>
#define N 100000

struct POINT2D_EX
{
  double x;
  double y;
  double dist;
};

void read_point(struct POINT2D_EX po[])
{
  FILE *file = fopen("data2.txt", "r");
  int repeat = 0;
  while(fscanf(file, &d, &repeat) == 1) {
    po[repeat] = fscanf(file, &d, &repeat);
    repeat++;
  }
  fclose(file);
}

int main(void)
{
  struct POINT2D_EX pt[N];

  read_point(pt);

  printf("最初の座標 x=%.5f y=%.5f\n", pt[0].x, pt[0].y);
  printf("最後の座標 x=%.5f y=%.5f\n", pt[N - 1].x, pt[N - 1].y);
  printf("N/2番目の座標 x=%.5f y=%.5f\n", pt[N / 2 - 1].x, pt[N / 2 - 1].y);

  return 0;
}
