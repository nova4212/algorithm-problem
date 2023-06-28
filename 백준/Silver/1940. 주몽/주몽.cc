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
    int front=0, back=N-1, sum = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }  
    sort(arr.begin(),arr.end());
    while (front != back)
    {
        if (arr[front] + arr[back] == M)
        {
            count++;
            front++;
        }
        else if (arr[front] + arr[back] > M)
        {
            back--;
        }
        else if (arr[front] + arr[back] < M)
        {
            front++;
        }
    }

    cout << count << "\n";
 }
