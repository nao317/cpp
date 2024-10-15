// ハッシュ

#include <iostream>
#include <vector>

using namespace std;

int power30[4] = {1, 30, 30 * 30, 30 * 30 * 30};

int hashToint(string &str)
{
    int length = str.length();
    int converted = 0;

    for (int i = 0; i < length; i++)
    {
        char character = str[length - i - 1];
        int distance = character - 'a' + 1;
        converted = converted + distance * power30[i];
    }

    return converted;
}

int main()
{
    int n;
    cin >> n;

    vector<int> count(power30[3] * 30, 0);

    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        int index = hashToint(str);
        count[index]++;
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        string str;
        cin >> str;
        int index = hashToint(str);
        cout << count[index] << endl;
    }

    return 0;
}