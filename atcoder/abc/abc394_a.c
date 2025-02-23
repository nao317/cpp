#include <stdio.h>
#include <assert.h>
#include <string.h>

int main(void) {
    char string[100];
    assert(scanf("%99s", string) > 0);
    for (size_t i = 0; i < strlen(string); i++) {
        if (string[i] == '2') {
            printf("%c", string[i]);
        }
    }
    printf("\n");
    return 0;
}