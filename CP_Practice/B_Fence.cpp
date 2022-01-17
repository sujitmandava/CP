#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double;

void solve()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int m = 0, s, j = 0;
    for (int i = 0; i < k; i++)
    {
        m += a[i];
    }
    s = m;
    for (int i = k; i < n; i++)
    {
        s = s - a[i - k] + a[i];
        if (s < m)
        {
            m = s;
            j = i - k + 1;
        }
    }
    cout << j + 1;
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
