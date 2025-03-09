

#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    int qnum;
    cin >> qnum;
    int query;
    vector<int> cards;
    cards.push_back(0);
    for (int i = 0; i < qnum; i++) {
        cin >> query;
        if (query == 1) {
            int x;
            cin >> x;
            cards.push_back(x);
        } else {
            if (!cards.empty()) {
                cout << cards.back() << endl;
                cards.pop_back();
            } else {
                cout << 0 << endl;
            }
        }
    }
    return 0;
}