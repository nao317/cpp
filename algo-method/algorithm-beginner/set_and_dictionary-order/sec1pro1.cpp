// 文字列の種類数
#include <iostream>
#include <set>

using namespace std;

int main()
{
    int n;
    cin >> n;
    set<string> str;
    for (int i = 0; i < n; i++)
    {
        string String;
        cin >> String;
        str.insert(String);
    }
    cout << str.size() << endl;

    return 0;
}