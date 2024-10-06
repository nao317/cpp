// Linear Search

#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n, x;
    cin >> n >> x;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {

        cin >> a[i];

    }

    bool check = false;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            check = true;
        }
    }

    if (check) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;

}