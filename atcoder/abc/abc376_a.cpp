// Candy Button

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, c;
    cin >> n >> c;
    int count = 0;
    vector<int> t(n);
    for (int i = 0; i < n; i++)
    {
        cin >> t[i];
    }
    int compare = t[0];
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            count++;
        }
        else
        {
            if (t[i] - compare >= c)
            {
                count++;
                compare = t[i];
            }
        }
    }

    cout << count << endl;

    return 0;
}