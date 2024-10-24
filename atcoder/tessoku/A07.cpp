// Event Attendance

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int d, n;
    cin >> d >> n;

    vector<int> day(n);
    
    for (int i = 0; i < n; i++) {
        int begin, end;
        cin >> begin >> end;
        for (int j = begin-1; j <= end-1; j++) {
            day[j]++;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << day[i] << endl;
    }

    return 0;

}