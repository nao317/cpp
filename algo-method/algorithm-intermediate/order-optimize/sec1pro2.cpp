// 「1個除外した総和の最大値」

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<long long> vec(n);

    for (int i = 0; i < n; i++)
    {

        cin >> vec[i];
    }

    long long t = 0;
    for (int i = 0; i < n; i++)
    {

        t += vec[i];
    }

    vector<long long> result(n);

    for (int i = 0; i < n; i++)
    {

        result[i] = t - vec[i];
    }

    cout << *max_element(result.begin(), result.end()) << endl;

    return 0;
}