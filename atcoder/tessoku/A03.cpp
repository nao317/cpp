/* A03 - Two Cards */

#include <iostream>
#include <vector>

using namespace std;

// プロトタイプ宣言
void say_yes();
void say_no();

int main(void) {
    int n, k;
    cin >> n >> k;
    // 配列の定義
    vector<int> red(n);
    vector<int> blue(n);
    // 配列にデータを入力
    for (int i = 0; i < n; i++) cin >> red[i];
    for (int i = 0; i < n; i++) cin >> blue[i];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (red[i] + blue[j] == k) {
                say_yes();
            }
        }
    }
    say_no();
}

void say_yes() {
    cout << "Yes" << endl;
    exit(0);
}
void say_no() {
    cout << "No" << endl;
    exit(0);
}