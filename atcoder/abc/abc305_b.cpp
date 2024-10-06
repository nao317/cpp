#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main()
{

    string p, q;

    cin >> p >> q;

    string sample = "ABCDEFG";

    int index1 = p.find(sample.begin(), sample.end());
    int index2 = q.find(sample.begin(), sample.end());

    int result = fabs(index1 - index2);

    cout << result << endl;

    return 0;
}