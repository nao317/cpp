/* tcaF */

#include <stdio.h>
#include <assert.h>

int main(void) {
    long x;
    assert(scanf("%ld", &x) > 0);
    long num = 1;
    int count = 1;
    while (x > num) {
        num = count * num;
        if (num == x) {
            break;
        }
        count++;
    }
    printf("%d\n", count);
    return 0;
}