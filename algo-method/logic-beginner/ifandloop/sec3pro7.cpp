/* K番目の値 */

#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    
    int n, k; // n : 要素数、k：求める値のアドレス
    cin >> n >> k;

    vector<int> vec;

    // vectorへの入力
    for (int i = 0; i < n; i++) {
        
        int num; // 入力用の変数num
        cin >> num;

        vec.push_back(num);

    }

    cout << vec[k] << endl;

    return 0; // 終了
    
}