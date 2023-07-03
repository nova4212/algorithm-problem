#include <iostream>
#include <algorithm>
#include <deque>
#include <stack>

using namespace std;
typedef pair<int, int> node;
int arr[100002];
char arr2[200005];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    int k = 1;
    int j = 0;
    stack<int> aaaa;
    cin >> n;
    for (int i = 1; i < n+1; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i < n+1; i++)
    {
        aaaa.push(i);
        arr2[j] = '+';
        j++;
        while(aaaa.top() == arr[k])
        {
            aaaa.pop();
            k++;
            arr2[j] = '-';
            j++;
            if (aaaa.empty()==1)
                break;
        }
    }
    if (aaaa.empty() == true)
    {
        int i = 0;
        while (arr2[i] != NULL)
        {
            cout << arr2[i] << "\n"; i++;
        }
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
