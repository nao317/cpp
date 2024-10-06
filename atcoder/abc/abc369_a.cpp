// 「369」
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int result = 0;
    int check = (a + b) / 2;
    int check1 = fabs(a - check);
    int check2 = fabs(check - b);
    if (a == b)
    {
        result = 1;
    }
    else if (check1 == check2)
    {
        result = 3;
    }
    else
    {
        result = 2;
    }

    cout << result << endl;

    return 0;
}