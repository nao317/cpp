/* A61 - Adjacent Vertices */

#include <iostream>
#include <vector>
using namespace std;
// variables for graph
int N, M;
int A[100009], B[100009];
vector<int> graph[100009];

int main(void) {
    cin >> N >> M;
    for (int i = 1; i <= M; i++) {
        cin >> A[i] >> B[i];
        graph[A[i]].push_back(B[i]);
        graph[B[i]].push_back(A[i]);
    }
    for (int i = 1; i <= N; i++) {
        cout << i << ": {";
        for (int j = 0; j < graph[i].size(); j++) {
            if (j >= 1) cout << ", ";
            cout << graph[i][j];
        }
        cout << "}" << endl;
    }

    return 0;

}