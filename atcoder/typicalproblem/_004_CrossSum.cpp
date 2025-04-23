/* 004 Cross Sum ☆2 */

// i, jの和を新しく動的配列を作って代入していく

#include <iostream>
#include <vector>
#include <numeric> // accumulate() is included in it

using namespace std;

int main(void) {

    int h, w; // h, wは行と列
    cin >> h >> w; // h, wにそれぞれ入力

    vector<vector<int>> array(h, vector<int>(w)); // 二次元配列 array を宣言

    // 配列 array に入力する
    for (int i = 0; i < h; i++) {
        // i 行目に入力
        for (int j = 0; j < w; j++) {
            // j 列目に入力
            cin >> array[i][j]; // A(i,j) を入力
        }
    }

    vector<int> vert(h, 0); // 垂直方向（y軸）
    vector<int> horiz(w, 0); // 水平方向（x軸）

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            // x成分とy成分に分けて足しこむ
            vert[i] += array[i][j]; // 垂直方向
            horiz[j] += array[i][j]; // 水平方向
        }
    }

    // 計算結果の出力
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cout << vert[i] + horiz[j] - array[i][j]; // 重複分を除いた和を出力
            if (j != w - 1) {
                cout << " "; // 右端でなければスペースを出力
            }
        }
        // 右端まで来たので改行を出力
        cout << endl;
    }

    return 0; // プログラムの終了

}