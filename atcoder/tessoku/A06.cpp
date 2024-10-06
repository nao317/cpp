// How Many Guests?

#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{

    int n, q;

    cin >> n >> q;

    vector<int> vec(n);

    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    for (int i = 0; i < q; i++)
    {
        int rangel, ranger;
        int sum = 0;
        cin >> rangel >> ranger;

        sum = reduce(vec.begin() + (rangel - 1), vec.end() + ranger);

        cout << sum << endl;
    }

    return 0;
}