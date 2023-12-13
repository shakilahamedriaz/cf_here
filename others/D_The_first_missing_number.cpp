#include <bits/stdc++.h>
using namespace std;

int misIndex( vector<int>& A, int N, int M) {

    
    vector<bool> visited(M*2, false);

    for (int i = 0; i < N; i++) {
        visited[A[i]+M] = true;

    }

    for (int i = -M; i <= M; i++) {
        if (!visited[i + M]) {
            return i;
        }
    }


    return 0;
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int missingNumber = misIndex(A, N, M);
    cout << missingNumber << endl;

    return 0;
}
