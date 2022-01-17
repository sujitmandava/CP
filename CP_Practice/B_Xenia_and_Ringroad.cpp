#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double;

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll a[m];
    for (ll i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    ll k = ((a[0] - 1) % n);
    for (ll i = 1; i < m; i++)
    {
        k = (a[i] >= a[i - 1]) ? k + ((a[i] - a[i - 1]) % n) : k + n - (a[i - 1] - a[i]);
    }
    cout << k;
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
