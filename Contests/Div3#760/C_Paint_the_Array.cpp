#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double;

void solve()
{
    int n;
    cin >> n;

    ll a[n], b[n];

    int p = 0, q = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            cin >> a[p++];
        }
        else
            cin >> b[q++];
    }

    if (n == 2)
    {
        if (a[0] == b[0])
        {
            cout << 0;
            return;
        }
        cout << max(a[0], b[0]);
        return;
    }

    sort(a, a + p);
    sort(b, b + q);
    ll da = __gcd(a[0], a[1]);
    ll db = __gcd(b[0], b[1]);

    for (int i = 2; i < p; i++)
    {
        if (__gcd(da, a[i]) == 1)
        {
            goto L1;
        }
        else
        {
            da = __gcd(da, a[i]);
        }
    }
    for (int i = 0; i < q; i++)
    {
        if (b[i] % da == 0)
        {
            cout << 0;
            return;
        }
    }
    cout << da;
    return;

L1:
    for (int i = 1; i < p; i++)
    {
        db = __gcd(db, b[i]);
    }
    if (db == 1)
    {
        cout << 0;
        return;
    }
    for (int i = 0; i < p; i++)
    {
        if (a[i] % db == 0)
        {
            cout << 0;
            return;
        }
    }
    cout << db;
    return;
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
