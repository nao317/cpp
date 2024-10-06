#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<int> vec(n);

    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    for (int k = 0; k < n-1; k++)
    {
        auto min_index = min_element(vec.begin() + k, vec.end());
        swap(vec[k], *min_index);
        for (int g = 0; g < n - 1; g++)
        {
            cout << vec[g] << " ";
        }
        cout << vec[n - 1] << endl;
    }

    return 0;
}