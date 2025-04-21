/* プラスの個数 */

#include <iostream>
#include <vector>

using namespace std;

//　Aを表示して終了
void say_A() {

    cout << "A" << endl;
    exit(0);

}

//　Bを表示して終了
void say_B() {

    cout << "B" << endl;
    exit(0);

}

// 配列に含まれる正の整数をカウントする関数
int positive_count (vector<int> &vec, int n) {

    int count = 0;

    for (int i = 0; i < n; i++) {

        if (vec[i] > 0) {

            count++;

        } else {

            continue;

        }

    }

    return count;

}
int main(void) {

    int n, m; // n：　配列Aの要素数 | m：　配列Bの要素数
    cin >> n >> m;

    vector<int> a;
    vector<int> b;

    // 配列Aへの入力
    for (int i = 0; i < n; i++) {

        int num;
        cin >> num;

        a.push_back(num);

    }

    // 配列Bへの入力
    for (int i = 0; i < m; i++) {

        int num;
        cin >> num;

        b.push_back(num);

    }

    // positive_countを呼び出して正の整数の個数をカウント
    int count_a = positive_count(a, n);
    int count_b = positive_count(b, m);

    if (count_a > count_b) {

        say_A();

    } else if (count_a < count_b) {

        say_B();

    } else {

        cout << "same" << endl;

    }

    return 0;

}