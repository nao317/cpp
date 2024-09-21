// 「掛け算の最大値」
#include <iostream>

using namespace std;

int main()
{

    int a;
    cin >> a;
    int result = 1;
    for (int i = 1; i <= a - 1; i++)
    {
        int x = i;
        int y = a - x;
        if (result <= x * y)
        {
            result = x * y;
        }
    }

    cout << result << endl;

    return 0;
}