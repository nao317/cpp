#include <bits/stdc++.h>

using namespace std;

int main() {
    int m;
    cin >> m;  // 整数 m を入力
    
    vector<int> powers;  // 累乗の指数を格納するためのベクトル
    int current_power = 1;  // 現在の累乗の値 (3^0 = 1から始まる)
    
    // 3 の累乗の和で m を表す
    while (m > 0) {
        int max_power = 0;
        int value = 1;
        
        // m を超えない最大の 3^i を探す
        while (value * 3 <= m) {
            value *= 3;
            max_power++;
        }
        
        // 最大の累乗 3^max_power を使い、m から引く
        powers.push_back(max_power);
        m -= value;
    }
    
    // 数列のサイズ N を出力
    cout << powers.size() << endl;

    // 数列 A を横並びで出力
    for (int i = 0; i < powers.size(); i++) {
        if (i > 0) cout << " ";  // 最初の要素の前には空白を挿入しない
        cout << powers[i];
    }
    cout << endl;

    return 0;
}
