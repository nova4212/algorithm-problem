#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;
    vector<long> arr(N, 0);
    vector<long> dp(M, 0);
    long count=0;
    for (int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        if (i != 0)
        {
            arr[i] = arr[i - 1] + temp;
        }
        else
        {
            arr[i] = temp;
        }
    }
    for (int i = 0; i < N; i++)
    {
        int rem = arr[i] % M;
        if (rem == 0)
        {
            count++;
        }
        dp[rem]++;
    }
    for (int i = 0; i < M; i++)
    {
        count = count + (dp[i] * (dp[i] - 1) / 2);
    }

    cout << count << "\n";
 }
