/* B - Bounding */

#include <stdio.h>
#include <assert.h>

int main(void) {
    int n, x;
    assert(scanf("%d", &n) > 0);
    assert(scanf("%d", &x) > 0);
    int list[n];
    for (int i = 0; i < n; i++) {
        assert(scanf("%d", &list[i]) > 0);
    }

    int location[n + 1];
    location[0] = 0;
    for (int i = 1; i < n + 1; i++) {
        location[i] = list[i - 1] + location[i - 1];
    }
    int count = 0;
    for (int i = 0; i < n + 1; i++) {
        if (location[i] <= x) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}