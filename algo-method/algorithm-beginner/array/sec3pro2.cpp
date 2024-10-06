// 間違い探し
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int h, w;      // 行数hと列数w
    cin >> h >> w; // 入力

    vector<string> s(h); // 一つ目の表
    vector<string> t(h); // 二つ目の表

    for (int i = 0; i < h; i++)
    {
        cin >> s[i]; // 一つ目の表に入力（行ごとに文字列として）
    }
    for (int j = 0; j < h; j++)
    {
        cin >> t[j]; // 二つ目の表に入力（行ごとに文字列として）
    }

    int count = 0; // 間違い探し用の整数型変数countを宣言

    for (int a = 0; a < h; a++)
    {
        string str1 = s[a]; // 一つ目の表のa行目の文字列を宣言した文字列型変数str1に代入
        string str2 = t[a]; // 二つ目の表のa行目の文字列を宣言した文字列型変数str2に代入
        for (int b = 0; b < w; b++)
        {
            if (str1[b] != str2[b]) // 一文字ずつ比較する
            {
                count++; // 同じ文字でないときインクリメント
            }
        }
    }

    cout << count << endl; // 出力

    return 0; // 終了
}