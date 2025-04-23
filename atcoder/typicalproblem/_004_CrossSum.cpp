/* 004 Cross Sum ☆2 */

// i, jの和を新しく動的配列を作って代入していく

#include <iostream>
#include <vector>
#include <numeric> // accumulate() is included in it

using namespace std;

int main(void) {

    int h, w; // h, wは行と列
    cin >> h >> w; // h, wにそれぞれ入力

    vector<vector<long>> array(h, vector<long>(w)); // 二次元配列 array を宣言

    // 配列 array に入力する
    for (int i = 0; i < h; i++) {
        // i 行目に入力
        for (int j = 0; j < w; j++) {
            // j 列目に入力
            cin >> array[i][j]; // A(i,j) を入力
        }
    }

    vector<vector<long>> matsum(h, vector<long>(w));

    // 和をとって配列 matsum に代入
    for (int i = 0; i < h; i++) {
        // i 行目を見る
        for (int j = 0; j < w; j++) {
            // j 列目を見る
            int vert = 0; // 垂直方向の要素をカウントする
            for (int k = 0; k < h; k++) {
                vert += array[k][j];
            }
            int horiz = 0; // 水平方向の要素をカウントする
            horiz = accumulate(array[i].begin(), array[i].end(), 0); // 初期値0としてイテレータを指定して和を求める
            
            matsum[i][j] = vert + horiz - array[i][j]; // 重複分を消しこんだ和をi,jに代入

        }
    }

    // 解答を出力
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cout << matsum[i][j]; // matsum(i, j)を出力
            if (j != w - 1) {
                cout << " "; // 右端でないときスペースを出力
            }
        }
        cout << endl; // 右端のとき改行
    }

    return 0; // プログラムの終了

}