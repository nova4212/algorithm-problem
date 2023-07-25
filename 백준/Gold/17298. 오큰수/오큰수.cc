#include <iostream>
#include <algorithm>
#include <deque>
#include <stack>

using namespace std;
typedef pair<int, int> node;
int arr[1000002];
int arr2[1000002];

int main()
{
    int cnt = 0; 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    int k = 1;
    int j = 0;
    stack<int> aaaa;
    cin >> n;
    for (int i = 0; i < n ; i++)
    {
        cin >> arr[i];
    }
    aaaa.push(0);
    for (int i = 1; i < n; i++)
    {
        while (aaaa.empty() != 1 && arr[aaaa.top()] < arr[i])
        {
            arr2[aaaa.top()] = arr[i];
            aaaa.pop();
        }
        aaaa.push(i);

    }
    while (aaaa.empty() != 1)
    {
        arr2[aaaa.top()] = -1;
        aaaa.pop();
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }
    return 0;
}