// Two Cards

#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n, k;
    cin >> n >> k;

    vector<int> p(n);
    vector<int> q(n);

    bool result = false;

    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> q[i];
    }

    for (int j = 0; j < n; j++)
    {
        int check = k - p[j];
        for (int k = 0; k < n; k++)
        {
            if (check == q[k])
            {
                result = true;
                break;
            }
        }
    }

    if (result)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}