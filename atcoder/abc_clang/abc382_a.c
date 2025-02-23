/* A - Daily Cookie */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main(void) {
    int n, d;
    assert(scanf("%d %d", &n, &d) > 0);
    char *string;
    string = (char *)malloc((n + 1) * sizeof(char));
    assert(scanf("%s", string) > 0);
    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < n; i++) {
        if (string[i] == '@') {
            count1++;
        } else {
            count2++;
        }
    }

    if (count1 < d) {
        d = count1;
    }
    int result = d + count2;
    printf("%d\n", result);
    free(string);
    return 0;
}