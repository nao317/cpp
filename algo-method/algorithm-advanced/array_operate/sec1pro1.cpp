// 挿入、削除、検索（１）

#include <iostream>
#include <vector>

using namespace std;

void query0(vector<int> &vec)
{
    int n = vec.size();
    int k, v;
    cin >> k >> v;
    vec.insert(vec.begin() + k, v);
}

void query1(vector<int> &vec)
{
    int n = vec.size();
    int k;
    cin >> k;
    vec.erase(vec.begin() + k);
}

int query2(vector<int> &vec)
{
    int n = vec.size();
    int u;
    cin >> u;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (vec[i] == u)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int n;
    cin >> n;

    vector<int> vec(n);

    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int query;
        cin >> query;

        if (!query)
        {
            query0(vec);
        }
        else if (query == 1)
        {
            query1(vec);
        }
        else
        {
            cout << query2(vec) << endl;
        }
    }

    return 0;
}