/* A - Equally */

#include <stdio.h>
#include <assert.h>

int main(void) {
    int a, b, c;
    assert(scanf("%d", &a) > 0);
    assert(scanf("%d", &b) > 0);
    assert(scanf("%d", &c) > 0);
    if (a == b && a == c) {
        printf("Yes\n");
    } else if (a + b == c) {
        printf("Yes\n");
    } else if (a + c == b) {
        printf("Yes\n");
    } else if (b + c == a) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
    
}