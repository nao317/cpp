// バケットソート
#include <bits/stdc++.h>
using namespace std;

void input(vector<int> &vec, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
}
void initialize(vector<int> &num, int n)
{
    for (int i = 0; i < n; i++)
    {
        num[i] = 0;
    }
}

int main()
{

    int n;
    cin >> n;
    vector<int> vec(n);

    input(vec, n);

    int x = n + 1;
    vector<int> num(n);
    initialize(num, n);

    for (int i = 0; i < n; i++)
    {
        num[vec[i]]++;
    }

    vector<int> acc(x);
    initialize(acc, x);

    for (int j = 0; j < x; j++)
    {
        if (j == 0)
        {
            acc[j] = num[j];
        }
        else
        {
            acc[j] = acc[j - 1] + num[j];
        }
    }

    vector<int> b(n);

    for (int k = 0; k < n; k++)
    {
        acc[vec[k]]--;
        b[acc[vec[k]]] = vec[k];
    }

    for (int g = 0; g < n-1; g++) {
        cout << b[g] << " ";
    }

    cout << b[n-1] << endl;

    return 0;
}