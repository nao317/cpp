// Avoid Knight Attack

#include <iostream>
#include <vector>
using namespace std;
void renewthebox(vector<vector<long long>> &expression, long long a, long long b)
{

    vector<long long> horiz = {a + 2, a + 1, a - 1, a - 2, a - 2, a - 1, a + 1, a + 2};
    vector<long long> verti = {b + 1, b + 2, b + 2, b + 1, b - 1, b - 2, b - 2, b - 1};

    for (long long i = 0; i < 8; i++) {
        if (horiz[i] >= 0 && horiz[i] < expression.size() &&
            verti[i] >= 0 && verti[i] < expression[0].size()) {
            expression[horiz[i]][verti[i]] = 1;
        }
    }
}
int main()
{
    long long n, m;
    cin >> n >> m;
    vector<string> vec(n);
    vector<vector<long long>> expression(n, vector<long long>(n));
    for (long long i = 0; i < m; i++)
    {
        long long querya, queryb;
        cin >> querya >> queryb;
        renewthebox(expression, querya, queryb);
    }

    long long count = 0;

    for (long long i = 0; i < n; i++)
    {
        for (long long j = 0; j < n; j++)
        {
            if (expression[i][j] != 1)
            {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}