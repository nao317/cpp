// 二分探索

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int n; // 要素数
    int k; // 探索対象の値
    cin >> n >> k;

    vector<int> array(n);

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    sort(array.begin(), array.end());

    int flag = 0;
    int index = n / 2;
    while (flag == 0 || index == 0) {
        int summary = array[index - 1];
        if (summary < k) {
            index = (n - index) / 2;
        } else if (summary > k) {
            index = index / 2;
        } else {
            flag = index;
        }
    }

    if (flag == 0) {
        cout << "nothing" << endl;
    } else {
        cout << "found k at " << flag << endl;
    }

    return 0;
}