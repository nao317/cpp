//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string str;
    string str2;

    cin >> str >> str2;

    int index = 0;
    int length = str.length();
    int flag = 0;
    if (length > str2.length()) {
        length = str2.length();
    }
    for (int i = 0; i < length; i++) {

        if (str[i] != str2[i]) {
            index = i + 1;
            break;
        }

    }

    if (index == 0 && str.length() != str2.length()) {
        index = length + 1;
    }
    cout << index << endl;

    return 0;
}