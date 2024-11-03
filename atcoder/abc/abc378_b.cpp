//

#include <iostream>
#include <vector>

using namespace std;

void input(vector<int> &vec, vector<int> &vec2, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
        cin >> vec2[i];
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> q(n);
    vector<int> r(n);
    input(q, r, n);
    int Q;
    cin >> Q;
    vector<int> t(Q);
    vector<int> d(Q);
    input(t, d, Q);

    for (int k = 0; k < Q; k++)
    {
        int date = d[k];
        int qt = q[t[k] - 1];
        int rt = r[t[k] - 1];
        int surp = date % qt;
        int date_co = (rt - surp + qt) % qt;
        date += date_co;
        cout << date << endl;
    }

    return 0;
}