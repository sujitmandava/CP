#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve()
{
    ll n, k;
    cin >> n >> k;
    if (n == 1)
    {
        if (k == 1)
        {
            cout << "R";
            return;
        }
    }
    if (k > (n + 1) / 2)
    {
        cout << -1;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j && i % 2 == 0 && k != 0)
            {
                cout << "R";
                k--;
            }
            else
            {
                cout << ".";
            }
        }
        if (i != n - 1)
            cout << endl;
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
        // cout << "Case #" << i + 1 << ": ";
        solve();
        cout << "\n";
    }

    return 0;
}
