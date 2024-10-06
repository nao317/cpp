// subsidy
#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int a, b;
    cin >> a >> b;

    int result = (a * 100) / 110;

    if (result <= b)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << a << endl;
    }

    return 0;
}