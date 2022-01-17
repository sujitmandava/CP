#include <bits/stdc++.h>

using namespace std;

#define ll long long 

void solve()
{
    int n;
    cin >> n;

    ll a[n];
    ll m = INT32_MAX;
    ll k = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        m = min(a[i], m);
        k += m;
    }
    cout << k;
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
