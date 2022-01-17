#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define float double;

void solve()
{
    int n, t;
    cin >> n >> t;
    int a[n];
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
    }
    if (t == 1)
    {
        cout << "YES";
        return;
    }
    int k = 1;
    while (k < t)
    {
        k += a[k];
    }
    k == t ? cout << "YES" : cout << "NO";
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
