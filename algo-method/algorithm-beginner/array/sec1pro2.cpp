// 単発のクエリ
#include <bits/stdc++.h>

using namespace std;

int main () {
    vector<int> vec{3,1,4,1,5,9,2,6,5,3}; // vectorの宣言と要素の定義
    int k;

    cin >> k; // 単発のクエリ

    cout << vec[k] << endl; // クエリで指定された要素を出力

    return 0; // 終了

}