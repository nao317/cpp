/* A - Chord */

#include <stdio.h>
#include <string.h>
#include <assert.h>

int main(void) {
    char string[4];
    assert(scanf("%3s", string) > 0);
    char *list[] = {"ACE","BDF","CEG","DFA","EGB","FAC","GBD"};
    for (int i = 0; i < 7; i++) {
        if (strcmp(string, list[i]) == 0) {
            printf("Yes\n");
            break;
        }
        if (i == 6) {
            printf("No\n");
        }
    }
    return 0;
}