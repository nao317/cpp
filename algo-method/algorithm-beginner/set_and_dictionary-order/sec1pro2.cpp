// 「文字列に現れない文字」

#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<string> Alphabet = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};
    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        string cut = str.substr(i, 1);
        Alphabet.erase(cut);
    }

    cout << Alphabet.size() << endl;

    return 0;
}