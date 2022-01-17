#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double;

void solve()
{
    int n, m;
    cin >> n >> m;

    int a[n], k[n] = {0};
    set<int> s;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if (n == 1)
    {
        for (int i = 0; i < m; i++)
        {
            cout << 1 << "\n";
        }
        return;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (i == n - 1)
        {
            k[i] = 1;
            s.insert(a[i]);
        }
        else if (s.count(a[i]) == 0)
        {
            s.insert(a[i]);
            k[i] = k[i + 1] + 1;
        }
        else
        {
            k[i] = k[i + 1];
        }
    }

    for (int i = 0; i < m; i++)
    {
        int l;
        cin >> l;
        cout << k[l - 1] << "\n";
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
