#include <iostream>
#include <vector>
using namespace std;

static vector<vector<int>> A;
static vector<bool> visited;
static int N;
bool isPrime(int v);
void recursive(int v, int n);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    cin >> N;
    A.resize(N + 1);


    recursive(2,1);
    recursive(3,1);
    recursive(5,1);
    recursive(7,1);

}

void recursive (int v, int n) {

    if (n == N) {
        if (isPrime(v))
        {
            cout << v << "\n";
            return;
        }
        else
        {
            return;
        }
    }
    if (isPrime(v))
    {
        recursive(v * 10 + 1, n + 1);
        recursive(v * 10 + 3, n + 1);
        recursive(v * 10 + 7, n + 1);
        recursive(v * 10 + 9, n + 1);
        return;
    }
    else
    {
        return;
    }
}

bool isPrime(int v)
{
    for (int i = 2; i <= v / 2; i++)
    {
        if (v % i == 0)
        {
            return false;
        }
    }
    return true;
}
