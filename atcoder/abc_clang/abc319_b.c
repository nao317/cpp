/* Measure */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main(void) {
    int n;
    assert(scanf("%d", &n) > 0);
    int fragment = -1;
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= 9; j++) {
            if (n % j == 0 && i % (n / j) == 0) {
                fragment = j;
                char result[2];
                sprintf(result, "%d", fragment);
            } else {
                if (fragment == -1) {
                    printf("-");
                }
            }
        }
    }
    printf("\n");
    return 0;
}