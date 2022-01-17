#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double;

void solve()
{
    ll n;
    cin >> n;
    if (n >= 0)
    {
        cout << n;
        return;
    }
    else if (n < 0 && n >= -10)
    {
        cout << 0;
        return;
    }
    else
    {
        int d1 = abs(n) % 10;
        int d2 = (abs(n) % 100 - d1) / 10;

        if (d1 < d2)
        {
            cout << (n / 10) + d2 - d1;
        }
        else
            cout << n / 10;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int test_cases = 1;
    // cin >> test_cases;

    for (int i = 0; i < test_cases; i++)
    {
        // cout << "Case #" << i + 1 << ": ";
        solve();
        cout << "\n";
    }

    return 0;
}
