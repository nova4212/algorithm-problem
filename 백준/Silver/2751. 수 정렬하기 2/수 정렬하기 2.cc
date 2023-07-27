#include <iostream>
#include <algorithm>
#include <deque>
#include <stack>
#include <queue>
#include <vector>
#include <math.h>

using namespace std;
typedef pair<int, int> node;
int arr[50000001];
int arr2[1000002];
int idx[1000002];
int idx2[1000002];

int main()
{
    int cnt = 1;
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    int mod = 10;
    int num=0;
    int K;
    int j = 0;
    int biggest = 0;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + N);
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << "\n";
    }
    return 0;
}