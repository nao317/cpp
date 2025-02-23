#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
struct data {
    int length;
    char *string;
};

int main(void) {
    int n;
    assert(scanf("%d", &n) > 0);
    struct data *strs = (struct data *)malloc(n * sizeof(struct data));
    if (strs == NULL) {
        exit(1);
    }
    for (int i = 0; i < n; i++) {
        strs[i].string = (char *)malloc(100 * sizeof(char));
        assert(strs[i].string != NULL);
        assert(scanf("%s", strs[i].string) > 0);
        strs[i].length = strlen(strs[i].string);
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strs[i].length > strs[j].length) {
                struct data num = strs[i];
                strs[i] = strs[j];
                strs[j] = num;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%s", strs[i].string);
        free(strs[i].string);
    }
    printf("\n");
    return 0;
}