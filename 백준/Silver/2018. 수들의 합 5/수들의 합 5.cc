#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    int count=1;
    int front=0, back=0, sum = 0;
    while (back != N)
    {
        if (sum == N)
        {
            count++;
            back++;
            sum += back;
        }
        else if (sum > N)
        {
            sum -= front;
            front++;
        }
        else if (sum < N)
        {
            back++;
            sum += back;
        }
    }

    cout << count << "\n";
 }
