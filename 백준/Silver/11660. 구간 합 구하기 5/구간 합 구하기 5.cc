#include <iostream>

using namespace std;
int arr[1025][1025] = {};
int arr2[1025][1025] = {};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;

    
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            cin >> arr[i][j];
            arr2[i][j] = arr2[i - 1][j] + arr2[i][j - 1] - arr2[i - 1][j - 1]+arr[i][j];
        }
    }
    for (int i = 0; i < M; i++)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        cout << arr2[x2][y2] - arr2[x1-1][y2] - arr2[x2][y1-1] + arr2[x1-1][y1-1] << "\n";
    }

}
