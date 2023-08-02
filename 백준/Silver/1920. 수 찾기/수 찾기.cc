#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int arr[100001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i] ;
    }
    sort(arr, arr + N);
    int M;
    cin >> M;
    for (int i = 0; i < M; i++)
    {
        int k;
        cin >> k;
        int start = 0;
        int end = N-1;
        int counter = 0;
        while (start <= end)
        {
            int mid = (start + end) / 2;
            int midV = arr[mid];
            if (k > midV)
            {
                start = mid+1;
            }
            else if (k < midV)
            {
                end = mid - 1;
            }
            else if (k == midV)
            {
                cout << "1" << "\n";
                counter = 1;
                break;
            }
        }
        if (counter != 1) {
            cout << "0" << "\n";
        }
    }
}

