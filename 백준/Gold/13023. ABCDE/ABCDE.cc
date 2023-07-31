#include <iostream>
#include <vector>
using namespace std;

static vector<vector<int>> A;
static vector<bool> visited;
void DFS(int v,int dep);
static int N;
static int complete = 0;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int M;
    cin >> N >> M;
    A.resize(N);
    visited = vector<bool>(N, false);

    for (int i = 0; i < M; i++)
    {
        int s, e;
        cin >> s >> e;
        A[s].push_back(e);
        A[e].push_back(s);
    }
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        DFS(i, 1);
        if (complete == 1)
        {
            break;
        }
    }
    cout << complete << "\n";

    return 0;
}

void DFS(int v, int dep) {
    if (dep == 5 || complete)
    {
        complete = 1;
        return;
    }
    visited[v] = true;
    for (int i : A[v])
    {
        if (visited[i] == false)
        {
            DFS(i,dep+1);
        }
    }
    visited[v] = false;
}
