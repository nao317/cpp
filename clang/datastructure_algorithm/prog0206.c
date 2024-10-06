/* prog0206.c */

#include <stdio.h>

struct COMP
{
    double re;
    double im;
};

void print_comp(struct COMP c) // 複素数を出力するための関数
{
    if (c.re == 0) // 分岐のネスト (実部が0、正、負の3つのケースに大きく場合分けして分かりやすくする)
    {
        if (c.im == 0)
        {
            printf("%.1f\n", c.re); // 実部も虚部も0の時 "0.0" を出力（紛らわしくなることを避けるため実部を出力することに統一）
        }
        else if (c.im != 0) // 虚部が正、負の場合
        {
            printf("%.1fi\n", c.im);
        }
    }
    else if (c.re > 0) // 実部が正の場合
    {
        if (c.im == 0)
        {
            printf("%.1f\n", c.re);
        }
        else if (c.im > 0)
        {
            printf("%.1f+%.1fi\n", c.re, c.im);
        }
        else
        {
            printf("%.1f-%.1fi\n", c.re, -c.im);
        }
    }
    else // 実部が負の場合
    {
        if (c.im == 0)
        {
            printf("%.1f\n", c.re);
        }
        else if (c.im > 0)
        {
            printf("%.1f+%.1fi\n", c.re, c.im);
        }
        else
        {
            printf("%.1f-%.1fi\n", c.re, -c.im);
        }
    }
}

struct COMP add_comp(struct COMP c1, struct COMP c2)
{
    struct COMP c = {0.0, 0.0}; // この構造体型変数を関数の戻り値として返す

    c.re = c1.re + c2.re; // 構造体（複素数）c1, c2それぞれの実部を加算して構造体cの実部に代入
    c.im = c1.im + c2.im; // 構造体（複素数）c1, c2それぞれの虚部を加算して構造体cの虚部に代入

    return c;
}

struct COMP multi_comp(struct COMP c1, struct COMP c2)
{
    struct COMP c = {0.0, 0.0}; // この構造体型変数を関数の戻り値として返す

    c.re = c1.re * c2.re - c1.im * c2.im; // 構造体（複素数）c1, c2それぞれを乗算して構造体cの実部に代入
    c.im = c1.re * c2.im + c1.im * c2.re; // 構造体（複素数）c1, c2それぞれを乗算して構造体cの虚部に代入

    return c;
}

int main(void)
{
    struct COMP c1; // 構造体の宣言
    struct COMP c2;
    /* 宣言した構造体のメンバ変数にそれぞれ入力 */
    printf("c1.re=");
    scanf("%lf", &c1.re);
    printf("c1.im=");
    scanf("%lf", &c1.im);
    printf("c2.re=");
    scanf("%lf", &c2.re);
    printf("c2.im=");
    scanf("%lf", &c2.im);

    printf("c1=");
    print_comp(c1); // 複素数を指定された書式で出力

    printf("c2=");
    print_comp(c2);

    printf("c1+c2=");
    print_comp(add_comp(c1, c2));

    printf("c1*c2=");
    print_comp(multi_comp(c1, c2));

    return 0;
}