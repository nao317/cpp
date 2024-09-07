// 間違い探し
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int h, w;
    cin >> h >> w;

    vector<string> s(h);
    vector<string> t(h);

    for (int i = 0; i < h; i++)
    {
        cin >> s[i];
    }
    for (int j = 0; j < h; j++)
    {
        cin >> t[j];
    }

    int count = 0;

    for (int a = 0; a < h; a++)
    {
        string str1 = s[a];
        string str2 = t[a];
        for (int b = 0; b < w; b++)
        {
            if (str1[b] != str2[b])
            {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}