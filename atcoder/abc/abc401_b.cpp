/* B - Unauthorized */

#include <iostream>
#include <vector>

using namespace std;

int main(void) {

    int n; // 操作回数
    cin >> n;

    vector<string> status; // ログイン状況
    status.push_back("logout");
    int errorhandle = 0;

    for (int i = 0; i < n; i++) {
        string query;
        cin >> query;
        // クエリで4つの処理に分ける
        if (query == "login" || query == "logout") {
            status.push_back(query);
            continue;
        } else {
            if (query == "private") {
                if (status[status.size() - 1] == "logout") {
                    errorhandle++;
                }
            } else {
                continue;
            }
        }

        cout << errorhandle << endl;

        return 0;
    }
}