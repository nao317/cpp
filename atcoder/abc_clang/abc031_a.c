/* A - ゲーム */

#include <stdio.h>
#include <assert.h>

int main(void) {
    int a, d;
    assert(scanf("%d %d", &a, &d) > 0);
    int mult1 = (a + 1) * d;
    int mult2 = a * (d + 1);
    if (mult1 >= mult2) {
        printf("%d\n", mult1);
    } else {
        printf("%d\n", mult2);
    }
    return 0;
}