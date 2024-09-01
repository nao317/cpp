// ABC336_A　（龍文字列）
#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n; // 文字列のレベルnに整数を代入
    
    string str = "o"; // 変数の初期化（"o"をstrに代入）

    for (int i = 1; i < n; i++) {
        str = str + "o"; // 文字列を連結
    }

    cout << "L" << str << "ng" << endl; // 出力

    return 0;
}