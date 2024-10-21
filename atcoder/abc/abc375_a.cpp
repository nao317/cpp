// Seats

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    int count = 0;

    for (int i = 0; i < n - 2; i++)
    {
        string a = str.substr(i, 1);
        string b = str.substr(i + 1, 1);
        string c = str.substr(i + 2, 1);

        if (b == ".")
        {
            if (a == "#" && c == "#")
            {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}