#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double

void solve()
{
    ll x, n;

    cin >> x >> n;

    if (n % 4 == 0)
    {
        cout << x;
        return;
    }
    else if (n % 4 == 2)
    {
        if (x % 2 == 0)
        {
            cout << x + 1;
            return;
        }
        else
        {
            cout << x - 1;
            return;
        }
    }
    else if (n % 4 == 1)
    {
        if (x % 2 == 0)
        {
            cout << x - n;
            return;
        }
        else
        {
            cout << x + n;
            return;
        }
    }
    else
    {
        if ((x + 1) % 2 == 0)
        {
            cout << x - n - 1;
            return;
        }
        else
        {
            cout << x + n + 1;
            return;
        }
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
