#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

static vector<vector<int>> A;
static vector<bool> visited;
void DFS(int v);
void BFS(int v);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, Start;
    cin >> N >> M >> Start;
    A.resize(N + 1);


    for (int i = 0; i < M; i++)
    {
        int s, e;
        cin >> s >> e;
        A[s].push_back(e);
        A[e].push_back(s);
    }
    for (int i = 1; i <= N; i++) {
        sort(A[i].begin(), A[i].end());
    }
    visited = vector<bool>(N + 1, false);
    DFS(Start);
    cout << "\n";
    fill(visited.begin(), visited.end(), false);
    BFS(Start);
    cout << "\n";
}

void DFS(int v) {
    cout << v << " ";
    visited[v] = true;
    for (int i : A[v])
    {
        if (visited[i] == false)
        {
            DFS(i);
        }
    }
}

void BFS(int v) {
    queue<int> myqueue;
    myqueue.push(v);
    visited[v] = true;

    while (!myqueue.empty())
    {
        int now_node = myqueue.front();
        myqueue.pop();
        cout << now_node << " ";
        for (int i : A[now_node]) {
            if (visited[i] == false) {
                visited[i] = true;
                myqueue.push(i);
            }
        }
    }
}