#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n, m;

    cin >> n >> m;

    vector<int> vec1(n);
    vector<int> vec2(m);

    for (int i = 0; i < n; i++)
    {

        cin >> vec1[i];
        
    }

    for (int i = 0; i < m; i++)
    {

        cin >> vec2[i];
    }

    int count = 0;

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {

            if (vec1[i] > vec2[j])
            {

                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}