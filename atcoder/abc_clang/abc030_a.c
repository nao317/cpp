/* A - 勝率計算 */

#include <stdio.h>
#include <assert.h>

int main(void) {
    int a, b, c, d;
    assert(scanf("%d %d %d %d", &a, &b, &c, &d) > 0);
    double rate1 = (double)b / a;
    double rate2 = (double)d / c;
    if (rate1 == rate2) {
        printf("DRAW\n");
    } else if (rate1 > rate2) {
        printf("TAKAHASHI\n");
    } else {
        printf("AOKI\n");
    }
    return 0;
}