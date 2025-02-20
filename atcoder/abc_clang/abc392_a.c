/* A - shuffled equation */

#include <stdio.h>
#include <assert.h>
int main(void) {
    int a1, a2, a3;
    assert(scanf("%d", &a1) > 0);
    assert(scanf("%d", &a2) > 0);
    assert(scanf("%d", &a3) > 0);
    if (a1 * a2 == a3) {
        printf("Yes\n");
        return 0;
    } else if (a1 * a3 == a2) {
        printf("Yes\n");
        return 0;
    } else if (a2 * a3 == a1) {
        printf("Yes\n");
        return 0;
    } else {
        printf("No\n");
    }
    return 0;
}