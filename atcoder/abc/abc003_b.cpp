#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    vector<string> atcoder(7);
    string constance = "atcoder";
    for (int i = 0; i < 7; i++)
    {
        atcoder[i] = constance.substr(i, 1);
    }
    bool result = true;
    for (int i = 0; i < s.length(); i++)
    {
        string a = s.substr(i, 1);
        string b = t.substr(i, 1);
        if (a == "@" && b != "@")
        {
            bool check = find(atcoder.begin(), atcoder.end(), b) != atcoder.end();
            if (check)
            {
                s[i] = b[0];
            }
            else
            {
                result = false;
                break;
            }
        }
        else if (b == "@" && a != "@")
        {
            bool check = find(atcoder.begin(), atcoder.end(), a) != atcoder.end();
            if (check)
            {
                t[i] = a[0];
            }
            else
            {
                result = false;
                break;
            }
        }
    }

    if (s != t)
    {
        result = false;
    }
    if (result)
    {
        cout << "You can win" << endl;
    }
    else
    {
        cout << "You will lose" << endl;
    }

    return 0;
}