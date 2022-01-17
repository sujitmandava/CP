#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int ind = 0, eng = 0;
    int m;
    for (int i = 0; i < 5; i++)
    {
        cin >> m;
        if (m == 1)
        {
            ind++;
        }
        else if (m == 2)
        {
            eng++;
        }
    }
    if (eng > ind)
    {
        cout << "ENGLAND";
    }
    else if (ind > eng)
    {
        cout << "INDIA";
    }
    else
    {
        cout << "DRAW";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int test_cases = 1;
    cin >> test_cases;

    for (int i = 0; i < test_cases; i++)
    {
        //cout << "Case #" << i + 1 << ": ";
        solve();
        cout << "\n";
    }

    return 0;
}
