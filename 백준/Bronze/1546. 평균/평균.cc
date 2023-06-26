#include <iostream>
#include <algorithm>

using namespace std;

int arr[1000];

int main()
{
    int N;
    double count = 0;
    cin >> N;

    int avg;

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + N);

    for (int i = 0; i < N; i++)
    {
        count = count + arr[i];
    }
    count = count / arr[N - 1] / N * 100;
    cout << count;
}
