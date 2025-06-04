/* A63 - Shortest Path */

#include <iostream>
#include <vector>

using namespace std;

int N, M;
int A[100009], B[100009];
vector<int> graph[100009];
int distance[100009];

int main(void) {
    cin >> N >> M;
    for (int i = 0; i < M; i++) {
        cin >> A[i] >> B[i];
        graph[A[i]].push_back(B[i]);
        graph[B[i]].push_back(A[i]);
    }

}