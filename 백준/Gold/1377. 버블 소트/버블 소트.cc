#include <iostream>
#include <algorithm>
#include <deque>
#include <stack>
#include <queue>
#include <vector>
#include <math.h>

using namespace std;
typedef pair<int, int> node;
int arr[1000002];
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
    int num;
    int k = 1;
    int j = 0;
    int biggest = 0;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {

        cin >> arr[i];
        idx[arr[i]] = i;
    }
    for (int i = 0; i < N; i++)
    {
        arr2[i] = arr[i];
    }
    sort(arr2, arr2 + N);
    for (int i = 0; i < N; i++)
    {
        idx[arr[i]] = i+1;
    }
    for (int i = 0; i < N; i++)
    {
        idx2[arr2[i]] = i+1;
    }
    int Max = 0;
    for (int i = 0; i <= 1000001; i++)
    {
        if (Max < idx[i] - idx2[i]) {
            Max = idx[i] - idx2[i];
        }
    }
    cout << Max + 1;
    return 0;
}