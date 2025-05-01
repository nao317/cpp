/* A062 - Depth First Search */

#include <iostream>
#include <vector>

using namespace std;
int N, M;
int A[100009], B[100009];
vector<int> graph[100009];
bool visited[100009];

void dfs(int position) {
    visited[position] = true;
    for (int i = 0; i < graph[position].size(); i++) {
        int next = graph[position][i];
        if (visited[next] == false) dfs(next);
    }
    return;
}
int main(void) {
    cin >> N >> M;
    for (int i = 0; i < M; i++) {
        cin >> A[i] >> B[i];
        graph[A[i]].push_back(B[i]);
        graph[B[i]].push_back(A[i]);
    }
    dfs(1);
    string answer = "The graph is connected.";
    for (int i = 1; i <= N; i++) {
        if (visited[i] == false) answer = "The graph is not connected.";
    }
    cout << answer << endl;
    return 0;
}