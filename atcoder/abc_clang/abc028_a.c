/* テスト評価 */

#include <stdio.h>
#include <assert.h>

int main(void) {
    int score;
    assert(scanf("%d", &score) > 0);
    if (score <= 59) {
        printf("Bad\n");
    } else if (score >= 60 && score <= 89) {
        printf("Good\n");
    } else if (score >= 90 && score <= 99) {
        printf("Great\n");
    } else {
        printf("Perfect\n");
    }
    return 0;
}