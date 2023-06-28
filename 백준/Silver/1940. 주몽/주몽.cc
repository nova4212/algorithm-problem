#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;
    int count=0;
    vector<int> arr(N, 0);
    int front=0, back=0, sum = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < N-1; i++)
    {
        for (int j = i+1; j < N; j++)
        {
            if (arr[i] + arr[j] == M)
            {
                count++;
            }
        }
    }

    cout << count << "\n";
 }
