//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    vector<int> adash;
    adash.push_back(vec[0]);
    vector<int> result(n, -1);

    for (int i = 1; i < n; i++)
    {
        adash.push_back(vec[i]);
        for (int j = i - 1; j >= 0; j--)
        {
            if (adash[j] == vec[i])
            {
                result[i] = j + 1;
                break;
            }
        }
    }

    for (int i = 0; i < n - 1; i++)
    {
        cout << result[i] << " ";
    }
    
    cout << result[n - 1] << endl;

    return 0;
}