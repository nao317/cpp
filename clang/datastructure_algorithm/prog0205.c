/* prog0205.c */

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
    else if (c.re > 0)
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
    else
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
int main(void)
{
    struct COMP c;

    printf("c.re=");
    scanf("%lf", &c.re);
    printf("c.im=");
    scanf("%lf", &c.im);

    print_comp(c);

    return 0;
}