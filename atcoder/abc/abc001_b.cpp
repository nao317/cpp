// 視程の通報

#include <iostream>
using namespace std;

int main()
{
    int m;
    cin >> m;

    if (m < 100)
    {
        cout << "00" << endl;
    }
    if (m >= 100 && m <= 5000)
    {
        int ans;
        if (m < 1000)
        {
            ans = m / 100;
            cout << "0" << ans << endl;
        }
        else
        {
            ans = m / 100;
            cout << ans << endl;
        }
    }
    if (m > 5000 && m <= 30000)
    {
        int ans;
        ans = m / 1000;
        ans = ans + 50;
        cout << ans << endl;
    }
    if (m > 30000 && m <= 70000)
    {
        int ans;
        ans = m / 1000;
        ans = ans - 30;
        ans = ans / 5;
        ans = ans + 80;
        cout << ans << endl;
    }
    if (m > 70000)
    {
        cout << 89 << endl;
    }

    return 0;
}