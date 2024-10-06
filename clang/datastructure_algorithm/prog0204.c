/* prog0204 */

#include <stdio.h>
#include <math.h>

#define N 5

struct POINT2D {
    double x;
    double y;
};

void print_point(struct POINT2D p) {
    printf("(%.2f, %.2f)", p.x, p.y);
}

double distance (struct POINT2D p1, struct POINT2D p2) {
    double dist = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

int main(void) {

    struct POINT2D pt[N];
    struct POINT2D zero = {0,0};

    for (int i = 0; i < N; i++) {
        printf("x%d= ", i);
        scanf("%lf", &pt[i].x);
        printf("y%d= ", i);
        scanf("%lf", &pt[i].y);
    }

    double data[N];
    for (int i = 0; i < N; i++) {
        printf("P%d: ", i);
        print_point(pt[i]);
        data[i] = distance(zero, pt[i]);
        printf(" distance=%.3f\n", data[i]);
    }

    int index = 0;
    double maxdistance = 0;

    for (int i = 0; i < N; i++) {
        if (maxdistance < data[i]) {
            maxdistance = data[i];
            index = i;
        }
    }

    print_point(pt[index]);
    printf(" distance=%.3f\n", maxdistance);

    return 0;
}