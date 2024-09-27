// プログラミング1-1：２つの整数の最大公約数を求める（ユークリッドの互除法）
#include <stdio.h>

int main(void) {

    int a, b, n = 0, r;

    scanf("%d%d", &a, &b);
    /* a と b の公約数を求めて n に代入するプログラムを記述 */

    while (n == 0) {

        if (b != 0) {
            r = a % b;
            a = b;
            b = r;
        } else {
            n = a;
        }

    }

    printf("%d\n", n);

    return 0;
    
}