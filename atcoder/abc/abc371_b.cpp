// Taro

#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n, m;
    cin >> n >> m;

    vector<int> number(n);

    for (int i = 0; i < m; i++) {

        int query_house;
        string query_morf;

        cin >> query_house >> query_morf;

        if (query_morf == "M" && number[query_house-1] == 0) {
            cout << "Yes" << endl;
            number[query_house-1]++;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
    
}