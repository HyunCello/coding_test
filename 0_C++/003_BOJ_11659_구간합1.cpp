#include <iostream>
using namespace std;

int main() {

    int N = 0;
    int quiz = 0;
    int A[1000];
    cin >> N;
    cin >> quiz;

    for (int i = 0; i < N; i++){
        cin >> A[i];
    }

    int S[N];
    S[0] = A[0];
    for (int i = 1; i < N; i++){
        S[i] = S[i - 1] + A[i];
    }

    for (int i = 0; i < quiz; i++){
        int start, end;
        cin >> start >> end;
        int answer = S[end - 1] - S[start - 2];
        cout << answer << "\n";
    }
}
