#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    int count=0;
    vector<int> arr(N, 0);

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }  
    sort(arr.begin(), arr.end());
    for (int i = 0; i < N; i++)
    {
        int front = 0, back = N - 1, sum = 0;
        while (front != back)
        {
            if (arr[front] + arr[back] == arr[i])
            {
                if (front == i)
                {
                    front++;
                    continue;
                }
                else if (back == i)
                {
                    back--;
                    continue;
                }
                count++;
                break;
                front++;
            }
            else if (arr[front] + arr[back] > arr[i])
            {
                back--;
            }
            else if (arr[front] + arr[back] < arr[i])
            {
                front++;
            }
        }
    }


    cout << count << "\n";
 }
