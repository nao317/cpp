// Three Cards

#include <iostream>
#include <vector>
using namespace std;

int result(int left, int right, vector<int> &sum)
{
    int result_num = sum[right] - sum[left-1];
    return result_num;
}

int main()
{

    int n, k;
    cin >> n >> k;

    vector<int> vec(n);

    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    vector<int> sum(n + 1, 0);

    for (int i = 0; i < n; i++)
    {
        sum[i + 1] = sum[i] + vec[i];
    }

    for (int i = 0; i < k; i++)
    {
        int left, right;
        cin >> left >> right;
        cout << result(left, right, sum) << endl;
    }
    return 0;
}