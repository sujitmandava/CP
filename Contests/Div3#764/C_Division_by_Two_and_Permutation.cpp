#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double;


void solve()
{
    int n;
    cin >> n;
    ll a[n];
    bool b[n] = {false};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);

    for (int i = 0; i < n; i++)
    {
        ll t = a[i];
        while (t > 0)
        {
            if (t <= n && b[t-1] == false)
            {
                b[t - 1] = true;
                break;
            }
            t /= 2;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (b[i] == false)
        {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
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
