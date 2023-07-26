#include <iostream>
#include <algorithm>
#include <deque>
#include <stack>
#include <queue>
#include <vector>
#include <math.h>

using namespace std;
typedef pair<int, int> node;
int arr[12];
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
    int num;
    int k = 1;
    int j = 0;
    int biggest = 0;
    int N;
    cin >> N;
    while (N!=0)
    {
        mod = N % 10;
        N = N / 10;
        arr[j] = mod;
        j++;
    }
    sort(arr, arr + j);
    for (int i = j-1; i > -1; i--)
    {
        cout << arr[i];
    }
    return 0;
}
