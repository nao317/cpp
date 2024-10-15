// 挿入ソート

#include <stdio.h>

void input(int array[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
}

void output(int array[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        printf("%d", array[i]);
        printf(" ");
    }

    printf("%d\n", array[n - 1]);
}

int main(void)
{
    int n; // 整数型変数nを宣言
    printf("要素数n = ");
    scanf("%d", &n); // nに値を入力

    int array[n]; // 要素数nの整数型配列arrayを宣言

    input(array, n); // 作成したinput関数で配列arrayに入力

    for (int i = 1; i < n; i++) // 挿入ソートの部分
    {
        int position = i; // 調べ始める場所（要素のアドレス）をiとする

        while (position != 0 && array[position - 1] > array[position])
        {
            int empty = array[position - 1];
            array[position - 1] = array[position];
            array[position] = empty;
            position--; // positionをデクリメント
        }

        output(array, n); // １回分のソートが終わるたびにoutput関数で出力（改行込み）
    }

    return 0;
}