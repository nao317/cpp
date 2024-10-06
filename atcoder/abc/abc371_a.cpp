// Jiro

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    if (s1 != s2)
    {
        cout << "A" << endl;
    }
    else if (s1 == s3)
    {
        cout << "B" << endl;
    }
    else
    {
        cout << "C" << endl;
    }
    return 0;
}