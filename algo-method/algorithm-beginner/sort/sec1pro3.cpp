// 挿入ソート
#include <bits/stdc++.h>

using namespace std;

void input(vector<int> &vec, int n) // 配列にデータを入力するための関数inputを作成
{
    for (int i = 0; i < n; i++) // 入力
    {
        cin >> vec[i];
    }
}

void output(vector<int> &vec, int n) // ソート後の配列のデータを出力するための関数outputを作成
{
    for (int i = 0; i < n - 1; i++) // 出力（末尾以外スペース込みで）
    {
        cout << vec[i] << " ";
    }

    cout << vec[n - 1] << endl; // 末尾の要素を出力して改行
}

int main() // main関数
{
    int n; // 繰り返し回数用の整数型変数nを宣言
    cin >> n; // nに入力
    vector<int> vec(n); // 動的配列vecを宣言（要素数はn）
    input(vec, n); // 作成したinput関数を使ってvecに入力

    for (int i = 1; i < n; i++) // 挿入ソート（全ての要素で調べる（positionの初期値を1とするために、iの初期値も1とする）
    {
        int position = i; // 整数型変数positionを宣言してiを代入

        while (position != 0 && vec[position - 1] > vec[position]) // 選択範囲を狭めながら挿入個所を探す（奥から手前に迫るイメージ）
        {
            swap(vec[position - 1], vec[position]); // 要素の入れ替え
            position--; // positionをデクリメント
        }

        output(vec, n); // 作成したoutput関数で動的配列の現時点での中身を出力
    }

    return 0; // 終了
}