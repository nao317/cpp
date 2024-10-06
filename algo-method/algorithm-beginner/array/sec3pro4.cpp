#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int charachk(vector<string> &vec, int i, int q)
{
    string str = vec[i];
    string sharp = str.substr(q, 1);
    if (sharp == "#")
    {
        return 1;
    }
    return 0;
}
int characnt(vector<string> &vec, int p, int w)
{
    int count = 0;
    string str = vec[p];
    for (int i = 0; i < w; i++)
    {
        string cut = str.substr(i, 1);
        if (cut == "#")
        {
            count++;
        }
    }
    return count;
}

void input(vector<string> &vec, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
}

int main()
{
    int h, w;
    cin >> h >> w;
    vector<string> str(h);
    input(str, h);

    int p, q;
    cin >> p >> q;
    int result = 0;

    for (int i = 0; i < h; i++)
    {
        if (i != p)
        {
            result += charachk(str, i, q);
        }
        else
        {
            result += characnt(str, p, w);
        }
    }

    cout << result << endl;

    return 0;
}