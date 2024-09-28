// 数値の例

#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n, x, y;

    cin >> n >> x >> y;

    vector<int> vec(n);

    vec[0] = x;
    vec[1] = y;

    for (int i = 2; i < n; i++)
    {

        vec[i] = (vec[i - 1] + vec[i - 2]) % 100;
    }

    cout << vec[n - 1] << endl;

    return 0;
}