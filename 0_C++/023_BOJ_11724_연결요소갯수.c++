#include <iostream>
#include <vector>
using namespace std;

static vector<vector <int>> A; // 그래프 데이터 저장 인접 리스트, 이차원 벡터 형태?
static vector<bool> visited; // 방문 기록 저장 배열
void DFS(int v);

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M; // N: 노드 개수, M: 에지 개수
    cin >> N >> M;

    A.resize(N + 1); // 왜 N + 1로 설정하지? -> index 0을 사용하지 않기 때문에..!!
    visited = vector<bool>(N + 1, false);

    for (int i = 0; i < M; i++){
        int s, e;
        cin >> s >> e;
        A[s].push_back(e);
        A[e].push_back(s);
    }

    int count = 0;

    for (int i = 1; i < N + 1; i++){
        if (!visited[i]){
            count ++;
            DFS(i);
        }
    }
    cout << count << "\n";
}

void DFS(int v){
    if (visited[v]){
        return;
    }

    visited[v] = true;

    for (int i : A[v]){
        if (visited[i] == false){
            DFS(i);
        }
    }
}
