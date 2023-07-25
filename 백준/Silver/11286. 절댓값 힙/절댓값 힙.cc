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

struct compare
{
    bool operator()(int a, int b)
    {
        int fa = abs(a);
        int fb = abs(b);
        if (fa == fb)
        {
            return a > b;
        }
        else
        {
            return fa > fb;
        }
    }
};

int main()
{
    int cnt = 0; 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    priority_queue<int, vector<int>, compare> aaaa;

    int n;
    int num;
    int k = 1;
    int j = 0;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> num;
        if (num != 0)
        {
            aaaa.push(num);
        }
        else
        {
            if (aaaa.empty())
            {
                cout << "0" << "\n";
            }
            else
            {
                cout << aaaa.top() << "\n";
                aaaa.pop();
            }
        }
    }

    return 0;
}