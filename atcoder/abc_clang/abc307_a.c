/* A - Weekly Records */

#include <stdio.h>
#include <assert.h>

int main(void) {
    int n;
    assert(scanf("%d", &n) > 0);
    int array[n * 7];
    for (int i = 0; i < n * 7; i++) {
        assert(scanf("%d", &array[i]) > 0);
    }
    int count;
    for (int i = 0; i < n * 7; i = i + 7) {
        count = 0;
        for (int j = 0; j < 7; j++) {
            count = count + array[i + j];
        }
        if (i == n * 7 - 7) {
            printf("%d\n", count);
        } else {
            printf("%d ", count);
        }
    }

    return 0;

}