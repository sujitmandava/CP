#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double;

void solve()
{
    ll n, t;
    cin >> n;
    bool k[n];

    for (int i = 0; i < n - 1; i++)
    {
        cin >> t;
        k[t - 1] = true;
    }

    for (int i = 0; i < n; i++)
    {
        if (k[i] != true)
            cout << i + 1;
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
