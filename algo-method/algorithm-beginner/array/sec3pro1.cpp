#include <bits/stdc++.h>

using namespace std;

int main()
{
    int h, w;
    cin >> h >> w;
    int sum_result = 0;
    for (int i = 0; i < h; i++)
    {
        string str;
        cin >> str;
        for (int j = 0; j < w; j++)
        {
            if (str[j] == 'o')
            {
                sum_result++;
            }
        }
    }

    cout << sum_result << endl;

    return 0;
}