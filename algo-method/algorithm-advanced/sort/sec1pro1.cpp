// クイックソート

#include <iostream>
#include <vector>

using namespace std;

/* 配列vecに要素を入力する関数 */
void input(vector<int> &vec) // 配列の参照渡し
{
    for (int i = 0; i < vec.size(); i++)
    {
        cin >> vec[i]; // 要素の入力
    }
}

/* 配列vecの要素を一行に出力する関数（末尾で改行） */
void output(vector<int> &vec) // 配列の参照渡し
{
    for (int i = 0; i < vec.size() - 1; i++)
    {
        cout << vec[i] << " "; // 末尾でない配列の要素を出力
    }
    cout << vec[vec.size() - 1] << endl; // 末尾の要素を出力して改行
}

void quicksort(vector<int> &vec)
{
    int n = vec.size();
    if (!n) // vecのサイズが0（つまりvecの中身が空だった時）何もしない
    {
        return; // quicksort関数の修了
    }

    int div_index = n / 2;

    vector<int> left;  // 分割後の配列（左側）用
    vector<int> right; // 分割後の配列（右側）用

    /* ここのループでは分割（leftとrightへの仕分け） */
    for (int i = 0; i < n; i++) //
    {
        if (i == div_index) // i番目が分割する境目の時
        {
            continue; // 何もせずに次のループへ移行
        }

        if (vec[i] < vec[div_index]) // 
        {
            left.push_back(vec[i]); // leftの末尾に挿入
        }
        else // 右側にあるとき
        {
            right.push_back(vec[i]); // rightの末尾に挿入
        }
    }

    quicksort(left);
    quicksort(right);

    left.push_back(vec[div_index]);
    left.insert(left.end(), right.begin(), right.end());
    vec = left;
}

int main()
{
    int n;
    cin >> n;

    vector<int> vec(n);

    input(vec);     // vecにn個の要素を入力
    quicksort(vec); // vecをクイックソート
    output(vec);    // vecの中身を出力

    return 0;
}