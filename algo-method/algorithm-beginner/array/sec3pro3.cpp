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
    int upper = x - 1; // 入力後の配列の一行目の一文字目に当たる文字のインデックス（y座標）
    int left = y - 1;  // 入力後の配列の一行目の一文字目に当たる文字のインデックス（x座標）
    for (int a = 0; a < 3; a++) // 該当箇所を切り出す
    {
        string str = vec[upper + a]; // 一旦文字列に置き換える
        string cut = str.substr(left, left + 2); // ３文字分leftで求めたインデックスから切り取る
        result[a] = cut; // 切り取った文字列をresult[a]に代入
    }
}

int main()
{

    int h, w, x, y; // 整数型変数を宣言
    cin >> h >> w >> x >> y; // 整数型変数たちに入力

    vector<string> vec(h);    // parameter用配列
    vector<string> result(3); // 解答用配列
    input(vec, h);            // vecへ入力
    cutout(vec, result, x, y); // 文字列を切り取る

    for (int i = 0; i < 3; i++) // 出力
    {
        cout << result[i] << endl;
    }
    return 0; // 終了
}