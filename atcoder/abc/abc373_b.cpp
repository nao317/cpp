#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int main() {

    string str;
    cin >> str;

    vector<string> vec = {"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};

    int index = str.find("A");
    int result = 0;
    
    for (int i = 1; i < 26; i++) {

        int nextindex = str.find(vec[i]);
        result += fabs(nextindex - index);
        index = nextindex;

    }

    cout << result << endl;

    return 0;
}