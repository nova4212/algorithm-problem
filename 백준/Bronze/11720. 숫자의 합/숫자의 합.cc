#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    int N;
    string num;
    int count = 0;
    cin >> N;
    cin >> num;

    for (int i = 0; i < num.length(); i++)
    {
        count = num[i] - '0' + count;
    }
    cout << count;
}
