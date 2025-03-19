/* A - AtCoDeerくんとペンキ */

#include <iostream>
#include <set>
using namespace std;

int main(void) {
    int a, b, c;
    cin >> a >> b >> c;
    set<int> Set;
    Set.insert(a);
    Set.insert(b);
    Set.insert(c);
    cout << Set.size() << endl;
    return 0;
}