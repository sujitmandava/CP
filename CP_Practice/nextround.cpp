#include <iostream>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int scores[n];
    int output = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> scores[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (scores[i] >= scores[k-1] && scores[i] != 0)
        {
            output++;
        }
    }
    cout << output << endl;
}