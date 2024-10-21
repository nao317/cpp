// Hands on Ring (Easy)

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> vec(n);

    for (int i = 0; i < n; i++)
    {
        vec[i] = i + 1;
    }

    int left = vec[0];
    int right = vec[1];
    int count = 0;
    int flag = 0;
    for (int i = 0; i < q; i++)
    {
        string h;
        int t;
        cin >> h >> t;

        if (h == "R")
        {
            if (left < right)
            {
                count += vec[t - 1] - right;
                right = vec[t - 1];
            }
            else
            {
                count += right + vec[n - 1] - vec[t - 1];
                right = vec[t - 1];
            }
        }
        else
        {
            count += 1 + vec[n - 1] - vec[t - 1];
            left = vec[t - 1];
        }
    }

    cout << count << endl;

    return 0;
}