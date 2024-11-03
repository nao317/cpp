/* prog0605.c */

#include <stdio.h>

struct PRICE
{
    int code;
    char *name;
    int price;
};

int binary_search(int key, struct PRICE data[], int n)
{
    int left = 0;
    int right = n - 1;
    int mid;

    while (left <= right)
    {
        mid = (left + right) / 2;
        if (data[mid].code == key)
        {
            return mid;
        }
        if (data[mid].code > key)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    return -1;

}

int main(void)
{
    struct PRICE data[8] = {
        {1000, "りんご", 120},
        {1001, "メロン", 500},
        {1002, "みかん", 90},
        {1003, "キウィ", 140},
        {1004, "ぶどう", 190},
        {1005, "スイカ", 700},
        {1006, "イチゴ", 300},
        {1007, "さくらんぼ", 250}};
    int x, found;

    scanf("%d", &x);
    found = binary_search(x, data, 8);
    if (found >= 0)
    {
        printf("%s は %d 円です\n", data[found].name, data[found].price);
    }
    else
    {
        printf("%d は見つかりませんでした\n", x);
    }
    return 0;
}