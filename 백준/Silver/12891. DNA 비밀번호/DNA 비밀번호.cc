#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

char arr [1000001];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int S,P;
    cin >> S >> P;
    int count=0;
    cin >> arr;

    int A, C, T, G;
    cin >> A >> C >> G >> T;
    int front = 0;
    int back = front + P -1;
    int cntA = 0;
    int cntC = 0;
    int cntT = 0;
    int cntG = 0;
    for (int i = front; i <= back; i++)
    {
        if (arr[i] == 'A')
        {
            cntA++;
        }
        else if (arr[i] == 'C')
        {
            cntC++;
        }
        else if (arr[i] == 'T')
        {
            cntT++;
        }
        else if (arr[i] == 'G')
        {
            cntG++;
        }
    }
    if (cntA >= A && cntC >= C && cntT >= T && cntG >= G)
    {
        count++;
    }
    while (back!=S-1)
    {
        if (arr[front] == 'A')
        {
            cntA--;
        }
        else if (arr[front] == 'C')
        {
            cntC--;
        }
        else if (arr[front] == 'T')
        {
            cntT--;
        }
        else if (arr[front] == 'G')
        {
            cntG--;
        }
        front++; back++;
        if (arr[back] == 'A')
        {
            cntA++;
        }
        else if (arr[back] == 'C')
        {
            cntC++;
        }
        else if (arr[back] == 'T')
        {
            cntT++;
        }
        else if (arr[back] == 'G')
        {
            cntG++;
        }

        if (cntA >= A && cntC >= C && cntT >= T && cntG >= G)
        {
            count++;
        }
    }


    cout << count << "\n";
 }
