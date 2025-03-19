/* AHC0044 */

#include <iostream>
#include <vector>
#include <random>
using namespace std;

void output(const vector<long> &a, const vector<long> &b, int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " " << b[i] << endl;
    }
}

int main(void) {
    int n;
    long l;
    cin >> n >> l;
    
    vector<long> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    random_device rd;  // シード値の取得
    mt19937 gen(rd()); // メルセンヌ・ツイスター法の乱数エンジン
    uniform_int_distribution<int> dist(1, 99); // 1 〜 99 の整数乱数
    int randoma = dist(gen);
    int randomb = dist(gen);
    vector<long> a(n, randoma);  // 長さ n の vector を 0 で初期化
    vector<long> b(n, randomb);
    vector<long> t(n, 0);

    for (long i = 0; i < n; i++) {
        while (t[i] < vec[i]) {
            t[i]++;
        }
    }
    for (long i = 0; i < n; i++) {
        random_device rd;  // シード値の取得
        mt19937 gen(rd()); // メルセンヌ・ツイスター法の乱数エンジン
        uniform_int_distribution<int> dist(1, 99); // 1 〜 99 の整数乱数
        int random = dist(gen);
        if (i % 2 == 0) {
            if (b[i] + t[i] < 100) {
                b[i] += t[i];
            } else {
                b[i] = random;
            }
        } else {
            if (a[i] + t[i] < 100) {
                a[i] += t[i];
            } else {
                a[i] = random;
            }
        }
    }

    output(a, b, n);

    return 0;
}
