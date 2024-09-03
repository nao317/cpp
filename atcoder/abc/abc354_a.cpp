// Exponential Plant
// 高橋君が何日目に身長HをExponential Plantに抜かれるかを求める
#include <bits/stdc++.h> // include 
using namespace std; // use namespace : std

int main () {
    int h; // 整数型変数h（身長）を宣言
    cin >> h; // hに入力
    int timestwo = 1; // ２の２乗を計算するための整数型変数
    int days = 1; // 何日経ったかを数えるための変数
    int sum = 1; // ループ内の身長（Exponential Plant）の値の経過を求めるための整数型変数
    while (sum <= h) { // Exponential Plantが高橋君以下の場合True
        timestwo = timestwo * 2; // ２の２乗の計算
        sum = sum + timestwo; // Exponential Plantの身長
        days++; // 経過日数インクリメント
    }

    cout << days << endl; // 何日後に高橋君が身長を追い抜かれたか出力

    return 0;
}