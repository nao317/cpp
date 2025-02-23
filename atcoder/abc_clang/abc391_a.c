/* A - Lucky Direction */

#include <stdio.h>
#include <assert.h>
#include <string.h>

int main(void) {
    char angle[3];
    assert(scanf("%2s", angle) > 0);
    if (strcmp("N", angle) == 0) {
        printf("S\n");
    } else if (strcmp("S", angle) == 0) {
        printf("N\n");
    } else if (strcmp("W", angle) == 0) {
        printf("E\n");
    } else if (strcmp("E", angle) == 0) {
        printf("W\n");
    } else if (strcmp("NW", angle) == 0) {
        printf("SE\n");
    } else if (strcmp("SE", angle) == 0) {
        printf("NW\n");
    } else if (strcmp("NE", angle) == 0) {
        printf("SW\n");
    } else if (strcmp("SW", angle) == 0) {
        printf("NE\n");
    }

    return 0;

}