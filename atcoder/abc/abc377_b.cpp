// Avoid Rook Attack

#include <iostream> 
#include <vector>
#define n 8
using namespace std;
void horiz(vector<vector<int>> &expression, int a) // 水平方向の要素に関して"#"が存在している行の真理値を1とする（vector &expression）
{
    for (int i = 0; i < n; i++) // 左側から右側へ一つずつ調べる
    {
        expression[a][i] = 1; // 真理値の更新
    }
}
void verti(vector<vector<int>> &expression, int index) // 垂直方向の要素に関して"#"が存在している列の真理値を1とする
{
    for (int i = 0; i < n; i++) // 上から下まで調べる
    {
        expression[i][index] = 1;
    }
}
int main()
{
    vector<string> vec(n); // 文字列を格納する動的配列を定義
    vector<vector<int>> expression(n, vector<int>(n)); // 真理値を管理する二次元配列を定義
    for (int i = 0; i < n; i++) // 標準入力
    {
        cin >> vec[i];
    }
    
    /*　扱いやすいように文字列を変数としておく　*/
    string sharp = "#";
    string period = ".";

    for (int i = 0; i < n; i++)
    {
         size_t pos = vec[i].find(sharp);
        while (pos != string::npos)  // process all '#' in the row
        {
            horiz(expression, i);
            verti(expression, pos);
            pos = vec[i].find(sharp, pos + 1);  // find next '#' in the row
        }
    }

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (expression[i][j] != 1)
            {
                count++; // 何もないマスをカウント
            }
        }
    }

    cout << count << endl; // 標準出力

    return 0;
}