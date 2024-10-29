/* prog0506.c */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
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
    if (file == NULL)
    {
        printf("you cannot open the file.\n");
        exit(1);
    }
    for (int i = 0; i < N; i++)
    {
        fscanf(file, "%lf %lf", &po[i].x, &po[i].y);
    }
    fclose(file);
}

void calc_dist(struct POINT2D_EX ref_p, struct POINT2D_EX po[])
{
    for (int i = 0; i < N; i++) {
        po[i].dist = sqrt(pow(po[i].x - ref_p.x, 2) + pow(po[i].y - ref_p.y, 2));
    }
}

void swap_point(struct POINT2D_EX po[], int x, int y)
{
    struct POINT2D_EX empty = po[x];
    po[x] = po[y];
    po[y] = empty;
}

int partition_point(struct POINT2D_EX po[], int left, int right)
{
    double pivot = po[right].dist;
    int i = left;

    for (int j = left; j < right; j++)
    {
        if (po[j].dist < pivot)
        {
            swap_point(po, i, j);
            i++;
        }
    }
    swap_point(po, i, right);
    return i;
}

void qsort_point(struct POINT2D_EX po[], int left, int right)
{
    int p_index;

    if (left < right)
    {
        p_index = partition_point(po, left, right);
        qsort_point(po, left, p_index - 1);
        qsort_point(po, p_index + 1, right);
    }
}

int main(void)
{
    struct POINT2D_EX pt[N];
    struct POINT2D_EX ref_p;

    read_point(pt);

    printf("基準点のx座標とy座標を入力: ");
    scanf("%lf%lf", &ref_p.x, &ref_p.y);

    calc_dist(ref_p, pt);
    qsort_point(pt, 0, N - 1);

    printf("最初の座標 x=%.5f y=%.5f\n", pt[0].x, pt[0].y);
    printf("最後の座標 x=%.5f y=%.5f\n", pt[N - 1].x, pt[N - 1].y);
    printf("N/2番目の座標 x=%.5f y=%.5f\n", pt[N / 2 - 1].x, pt[N / 2 - 1].y);

    return 0;
}