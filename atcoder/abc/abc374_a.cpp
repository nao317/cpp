//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string s;
    cin >> s;

    string substring = s.substr(s.size()-3,3);
    if (substring == "san") {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}