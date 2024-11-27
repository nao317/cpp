#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, M, A[100009], B[100009];
vector<int> G[100009];
bool visited[100009];

void dfs(int pos) {
    
    visited[pos] = true;

    for(int i : G[pos]) {
        if (visited[i] == false) {
            dfs(i);
        }
    }
}

int main() {
    cin >> N >> M;
    for (int i = 1; i <= M; i++) {
        cin >> A[i] >> B[i];
        G[A[i]].push_back(B[i]);
        G[B[i]].push_back(A[i]);
    }

    dfs(1);

    bool answer = true;
    for (int i = 1; i <= N; i++) {
        if (visited[i] == false) {
            answer = false;
        }
    }
    if (answer == true) cout << "The Graph is connected." << endl;
    else cout << "The Graph is not connected." << endl;
    return 0;
}