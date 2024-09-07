// 地図の切り取り
#include <bits/stdc++.h>

using namespace std;

void input(vector<string> &vec, int h) // input関数の宣言（vecに文字列を入力するための関数）
{
    for (int i = 0; i < h; i++) // vecへ入力
    {
        cin >> vec[i];
    }
}

void cutout(vector<string> &vec, vector<string> &result, int x, int y) // 該当箇所を切り出すためのcutout関数を作成
{
    int upper = x - 1;
    int left = y - 1;
    for (int a = 0; a < 3; a++)
    {
        string str = vec[upper + a];
        string cut = str.substr(left, left + 2);
        result[a] = cut;
    }
}

int main()
{

    int h, w, x, y;
    cin >> h >> w >> x >> y;

    vector<string> vec(h);    // parameter用配列
    vector<string> result(3); // 解答用配列
    input(vec, h);            // vecへ入力
    cutout(vec, result, x, y);

    for (int i = 0; i < 3; i++)
    {
        cout << result[i] << endl;
    }
    return 0;
}